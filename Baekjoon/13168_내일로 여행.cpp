#include <iostream>
#include<vector>
#include<string>
#include<map>
#define INF 987654321
using namespace std;
int n,cnt,m,k,ticket;
double dist1[250][250],dist2[250][250],ans1,ans2;
map<string,int> mp;
vector<string> trip;
int main(){
    cin>>cnt>>ticket;
    string s,s1,s2;
    n=cnt;
    for(int i=1;i<=cnt;i++){
        cin>>s; 
        if(mp.find(s)==mp.end()) 
        mp[s]=i;
        else n--;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) 
    if(i!=j) dist1[i][j]=dist2[i][j]=INF;
    cin>>m;
    for(int i=1;i<=m;i++) cin>>s,trip.push_back(s);
    cin>>k;
    for(int i=1;i<=k;i++){
        int S,E;
        double W;
        cin>>s>>s1>>s2>>W;
        S=mp[s1],E=mp[s2];
        if(dist1[S][E]>W)
        dist1[S][E]=dist1[E][S]=W;
        if(dist2[S][E]>W)
        dist2[S][E]=dist2[E][S]=W;
        if(s=="Mugunghwa"||s=="ITX-Saemaeul"||s=="ITX-Cheongchun")
        dist2[S][E]=dist2[E][S]=0;
        else if(s=="S-Train"||s=="V-Train"){
            if(dist2[S][E]>W/2.0)
            dist2[S][E]=dist2[E][S]=W/2.0;
        }
    }
    for(int l=1;l<=n;l++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(dist1[i][j]>dist1[i][l]+dist1[l][j])
        dist1[i][j]=dist1[i][l]+dist1[l][j];
        if(dist2[i][j]>dist2[i][l]+dist2[l][j])
        dist2[i][j]=dist2[i][l]+dist2[l][j];
    }
    for(int i=1;i<m;i++){
        int s=mp[trip[i-1]];
        int e=mp[trip[i]];
        ans1+=dist1[s][e];
        ans2+=dist2[s][e];
    }
    ans2+=(double)ticket;
    if(ans1>ans2) cout<<"Yes";
    else cout<<"No";
}