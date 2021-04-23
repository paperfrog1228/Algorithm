#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
struct bit{map<int,int> m;int bs;};
vector<bit> ans;
string now="10";
int n,cnt=0,digit=1,one;
string binary="";
string divide(string& s){
    string cal="";
    int carry=0;
    bool zero=true;
    for(int i=0;i<s.size();i++){
        int now=s[i]-'0';
        if(carry) now+=10;
        if(now%2==1) carry++; 
        else carry=0;
        char c=now/2+'0';
        if(i==s.size()-1){
            if(now%2==1) binary+='1';
            else binary+='0';
        }
        if(c=='0'&&zero) continue;
        cal+=c,zero=false;
    }
    return cal;
}
bit getBinary(bit b1,bit b2){
    map<int,int> mp;
    int bb1,bb2,carry=0;
    int bbs=max(b1.bs,b2.bs);
    bbs=min(bbs,162);
    for(int i=0;i<bbs;i++){
        if(b1.m.find(i)==b1.m.end()) bb1=0;
        else bb1=1;
        if(b2.m.find(i)==b2.m.end()) bb2=0;
        else bb2=1;
        if(bb1+bb2+carry==1) mp[i]++,carry=0;
        else if(bb1+bb2+carry==2) carry=1;
        else if(bb1+bb2+carry==3) mp[i]++,carry=1;
    }
    if(carry) mp[bbs++]++;
    return {mp,bbs};
}
bit getBinary(string& si){
    binary="";
    map<int,int> mp;
    string s=si;
     while(1){
        s=divide(s);
        if(s==""||s=="1") break;
    }
    if(s=="1") binary+="1";
    for(int i=digit;i<binary.size();i++)
        if(binary[i]=='1') mp[i]++;
    return {mp,(int)binary.size()};
}
void Print(bit b){
    string s="";
    for(int i=0;i<=digit;i++){
        if(b.m.find(i)==b.m.end()) s+='0';
        else s+='1';
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main(){
    scanf("%d",&n);
    if(n==1){
        printf("1");
        return 0;
    }
    map <int ,int> mp;
    mp[0]++;
    bit b={mp,1};
    ans.push_back(b);
    cnt++;
    while(1){
        map <int ,int> mp;
        bit nowb=getBinary(now);
        ans.push_back(nowb);
        cnt++;
        if(cnt==n){
            cout<<now<<endl;
            return 0;
        }
        int asize=ans.size()-1;
        for(int i=0;i<asize;i++){
            if(ans[i].m.find(digit)!=ans[i].m.end()&&ans[i].bs>digit){
                ans.erase(ans.begin()+i);
                asize--;i--;
                continue;
            }
            bit b=getBinary(nowb,ans[i]);
            cnt++;
            if(cnt==n){
                Print(b);
                return 0;
            }
            ans.push_back(b);
        }     
        now+='0';
        digit++;
    }
}
