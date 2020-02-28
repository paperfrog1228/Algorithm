#include<stdio.h>
int main(){
    int n,temp,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans=i;
        temp=i;
        while(temp>0){
            ans+=temp%10;
            temp/=10;
        }
        if(ans==n){
        printf("%d",i);
        return 0;
        }
    }
    printf("0");
}