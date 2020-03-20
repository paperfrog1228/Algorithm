#include<stdio.h>
int main(){
    int a[105],b[105],n,x=0,y=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    scanf("%d",&b[i]);
    bool flag=true;
    for(int i=1;i<=n;i++){
        if(a[i]&&b[i])
        continue;
        if(a[i])
        x++;
        if(b[i])
        y++;
        if(a[i]!=b[i])
        flag=false;
    }
    if(flag||x==0){
        printf("-1");
        return 0;
    }
    if(y%x==0){
        printf("%d",y/x+1);
        return 0;
    }
    printf("%d",(y-1)/x+1);
}