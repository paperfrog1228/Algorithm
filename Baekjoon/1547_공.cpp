#include<stdio.h>
int main(){
    int cup[52],m,a,b,ans;
    cup[1]=1,ans=1;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        if(cup[a]==1){
            cup[a]=0;
            cup[b]=1;
            ans=b;
        }
        else if(cup[b]==1){
            cup[b]=0;
            cup[a]=1;
            ans=a;
        }
    }
    printf("%d\n",ans);
}