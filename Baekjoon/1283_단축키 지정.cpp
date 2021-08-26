#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n,check[26];
vector<string> v[50];
string s,sub;
bool t(char c){
    if(c<'a') c+=32;
    if(!check[c]){
        check[c]++;
        return true;
    }
    else return false; 
}
void print(int i,int num1,int num2){
    vector<string> vv=v[i];
     for(int j=0;j<vv.size();j++){
         for(int k=0;k<vv[j].size();k++){
             if(j==num1&&k==num2){
                 cout<<'['<<vv[j][k]<<']';
             }
             else cout<<vv[j][k];
         }
         cout<<' ';
    }
    cout<<endl;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        getline(cin,s);
        cout<<"sex "<<i<< "sival "<<s<<endl;
        int cur=s.find(' ');
        int prev=0;
        while(cur!=string::npos){
            sub=s.substr(prev,cur-prev);
            v[i].push_back(sub);
            prev = cur+1;
            cur=s.find(' ',prev);
        }
        v[i].push_back(s.substr(prev,s.size()-prev));
    }
    for(int i=1;i<=n;i++){
        bool checking=false;
        int num1=-1,num2=-1;
        for(int j=0;j<v[i].size();j++){
            checking=t(v[i][j][0]);
            if(checking){
                num1=j,num2=0;
                break;
            }
        }
        if(checking){
            print(i,num1,num2);
            continue;
        }
        for(int j=0;j<v[i].size();j++){
            for(int k=0;k<v[i][j].size();k++){
                checking=t(v[i][j][k]);
                if(checking){
                    num1=j,num2=k;
                    break;
                }
            }
        }
       print(i,num1,num2); 
    }
}
