#include<stdio.h>
int n,m,a,b,c,l[4040];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&l[i]);
    while(m--){
        scanf("%d %d %d",&a,&b,&c);
        if(a==1) l[b]=c;
        if(a==2) for(int i=b;i<=c;i++) l[i]^=1;
        if(a==3) for(int i=b;i<=c;i++) l[i]=0;
        if(a==4) for(int i=b;i<=c;i++) l[i]=1;
    }
    for(int i=1;i<=n;i++) printf("%d ",l[i]);
}