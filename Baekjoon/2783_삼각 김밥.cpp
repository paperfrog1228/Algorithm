#include<stdio.h>
float a,b,seven;
int main(){
    int n;
    scanf("%f %f",&a,&b);
    seven=a/b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%f %f",&a,&b);
        if(a/b<seven)
        seven=a/b;
    }
    printf("%.2f",seven*1000);
}