#include <iostream>
double f[5]={350.34,230.90,190.55,125.30,180.90};
int a,b,c,d,e,t;
int main(){
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        printf("$%.2lf\n",a*f[0]+b*f[1]+c*f[2]+d*f[3]+e*f[4]);
        t--;
    }
}