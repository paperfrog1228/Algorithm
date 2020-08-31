#include<stdio.h>
char a[15];
long long b,ans=-1;
int index,arr[15],v[15];
void dfs(int n,int dep,long long cnt){
    if(arr[n]==0&&dep==index-1)
        return;
    if(v[n]) return;
        v[n]++;
    long long ten=1;
    for(int i=1;i<=dep;i++)
        ten*=10;
    cnt+=arr[n]*ten;
    if(dep==index-1&&cnt<=b&&cnt>ans)
    ans=cnt;
    for(int i=0;i<index;i++)
        dfs(i,dep+1,cnt);
    v[n]=0;
}
int main(){
    scanf("%s %lld",a,&b);
    while(a[index]!='\0'){
        arr[index]=a[index]-'0';
        index++;
    }
    for(int i=0;i<index;i++)
        dfs(i,0,0);
    printf("%lld",ans);
}