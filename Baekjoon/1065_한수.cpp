#include<stdio.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=i,d,temp=i%10;
        num/=10;
        d=num%10-temp;
        bool flag=true;
        while(num>0){
            int temp2=num%10;
            if(d!=temp2-temp){
                flag=false;
                break;
            }
            num/=10;
            temp=temp2;
        }
        if(flag)
        ans++;
    }
    printf("%d",ans);
}