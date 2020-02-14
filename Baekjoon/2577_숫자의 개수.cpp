#include<stdio.h>
int main(){
    unsigned long long temp,n;
    n=1000*1000*1000;
    int a,b,c,arr[10]={0,};
    scanf("%d %d %d",&a,&b,&c);
    temp=a*b*c;
    bool flag=false; 
    while(n!=0){
        if(temp/n!=0){
            flag=true;
            arr[temp/n]++;
        }
        if(temp/n==0&&flag)
        arr[0]++;
        temp-=(temp/n)*n;
        n/=10;
    }
    for(int i=0;i<=9;i++)
    printf("%d\n",arr[i]);
}