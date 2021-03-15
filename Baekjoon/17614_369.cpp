#include<iostream>
int n,clap;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp>0){
            if((temp%10)%3==0&&(temp%10)!=0) clap++;
            temp/=10;
        }
    }
    printf("%d",clap);
}