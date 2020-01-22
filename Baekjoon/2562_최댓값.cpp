#include<stdio.h>
int main(){
    int n,t,max=-1,maxi=-1;
    for(int i=1;i<=9;i++){
    scanf("%d",&t);
    if(t>max){
        max=t;
        maxi=i;
    }
    }
    printf("%d\n%d",max,maxi);
}