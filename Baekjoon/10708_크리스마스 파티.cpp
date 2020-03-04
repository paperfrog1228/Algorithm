#include<stdio.h>
int n,m,f[101],t[101],who,fail;
int main(){
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
        scanf("%d",&t[i]);
    for(int i=1;i<=m;i++){
        fail=0;
        for(int j=1;j<=n;j++){
            scanf("%d",&who);
            if(who==t[i])
                f[j]++;
            else fail++;
        }
        f[t[i]]+=fail;
    }
    for(int i=1;i<=n;i++)
    printf("%d\n",f[i]);
}