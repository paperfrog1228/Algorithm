#include<stdio.h>
struct p{long long x;long long y;};
long long cnt,e=-1000000000000000000,s=e;
p pos[100004];
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%lld %lld",&pos[i].x,&pos[i].y);
    for(int i=1;i<=n;i++){
        if(s<=pos[i].x&&pos[i].y<=e)
            continue;
        cnt+=(pos[i].y-pos[i].x);
        if(e>pos[i].x)
        cnt-=(e-pos[i].x);
        s=pos[i].x;
        e=pos[i].y;
    }
    printf("%lld",cnt);
}