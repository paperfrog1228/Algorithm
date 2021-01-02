#include<stdio.h>
int c,n;
double a[1004];
int main(){
    scanf("%d",&c);
    while(c>0){
        double avr=0;
        int cnt=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%lf",&a[i]);
            avr += a[i];
        }
        avr/=(double)n;
        for(int i=1;i<=n;i++)
            if(a[i]>avr) cnt++;
        printf("%.3lf\%\n",(double)cnt/(double)n*100);
        c--;
    }
}