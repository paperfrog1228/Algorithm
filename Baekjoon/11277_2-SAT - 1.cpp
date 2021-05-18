#include<bits/stdc++.h>
int n,m;
bool x[22],now,ans=false;
std::pair<int,int> f[102];
void dfs(int d){
    if(d>n){
        bool tmp=true;
        for(int i=1;i<=m;i++){
            bool ff=false,tt=false;
            if(f[i].first<0) ff=!x[-f[i].first];
            else ff=x[f[i].first];
            if(f[i].second<0) tt=!x[-f[i].second];
            else tt=x[f[i].second];
            tmp&=(ff||tt);
        }
        if(tmp==true) ans=true;
        return;
    }
    x[d]=true;
    dfs(d+1);
    x[d]=false;
    dfs(d+1);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d %d",&f[i].first,&f[i].second);
    dfs(1);
    if(ans)printf("1");
    else printf("0");
}
