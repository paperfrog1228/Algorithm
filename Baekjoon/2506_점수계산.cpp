#include<stdio.h>
int main(){
    int n,a,temp=0,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==1){
            temp++;
            ans+=temp;
        }
        else
            temp=0;
    }
    printf("%d",ans);
}