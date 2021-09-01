#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int n,zero[10],del;
long long w[10],ans;
string s[55];
bool cmp(long long& l1, long long& l2) {return l1 > l2;}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>s[i];
        zero[s[i][0]-'A']++;
        long long tmp=1;
        for(int j=s[i].size()-1;j>=0;j--)
            w[s[i][j]-'A']+=tmp,tmp*=10;
    }
    for(int i=0;i<10;i++) if(!zero[i]) del=i;
    for (int i=0;i<10;i++)
        if (!zero[i]&&w[i]<w[del]) 
            del=i;
    w[del]=0;
    sort(w,w+10,cmp);
    for(int i=0;i<10;i++)
        ans+=(9-i)*w[i];
    cout<<ans;
}