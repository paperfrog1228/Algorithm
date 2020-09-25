#include<iostream>
int n,t,a;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(i!=t)a++;
    }
    printf("%d",a);
}