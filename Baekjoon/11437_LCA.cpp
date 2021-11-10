#include <iostream>
int t,n,m,c;
int main(){
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%d %d",&n,&m);
        for(int i=1;i<n;i++)
        for(int j=i+1;j<n;j++)
            if((i*i+j*j+m)%(i*j)==0) c++;
        printf("%d\n",c);
    }
#include<iostream>
#include<memory.h>
#include<vector>
using namespace std;
int n,m,a,b,pa[50050][20],dep[50010];
vector<int> tree[50050];
void dfs(int now){
    for(auto next:tree[now]){
        if(dep[next]==-1){
            pa[next][0]=now;
            dep[next]=dep[now]+1;
            dfs(next);
        }
    }
}
int lca(int a,int b){
    if(dep[a]<dep[b]){
        int t=a;
        a=b;b=t;
    }
    int diff=dep[a]-dep[b];
    int i=0;
    while(diff!=0){
        if(diff%2==1) a=pa[a][i];
        diff/=2;
        i++;
    }
    if(a!=b){
        for(int i=17;i>=0;i--)
            if(pa[a][i]!=-1&&pa[a][i]!=pa[b][i])
                a=pa[a][i],b=pa[b][i];
        a=pa[a][0];
    }
    return a;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) dep[i]=-1;
    memset(pa,-1,sizeof(pa));
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dep[1]=0;
    dfs(1);
    for(int i=1;i<17;i++)
        for(int j=2;j<=n;j++){
            if(pa[j][i-1]==-1) continue;
            pa[j][i]=pa[pa[j][i-1]][i-1];
        }
    scanf("%d",&m);
    while(m--)
    scanf("%d %d",&a,&b),printf("%d\n",lca(a,b));
}}