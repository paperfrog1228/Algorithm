#include<stdio.h>
#include<vector>
int n;
std::vector<int> v;
void dfs(int m,int bit,std::vector<int> v){
    bit|=(1<<m);
    v.push_back(m);
    if(v.size()==n){
    for(int i=0;i<v.size()-1;i++)
    printf("%d ",v[i]);
    printf("%d\n",v[n-1]);
    }
    for(int i=1;i<=n;i++)
        if(bit&(1<<i))
        continue;
       else dfs(i,bit,v);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    dfs(i,0,v);
}