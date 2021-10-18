#include <stdio.h>
#include <math.h>
int d,h,w;
double a;
int main() {
    scanf("%d %d %d",&d,&h,&w);
    a=sqrt(h*h+w*w);
    printf("%d %d\n",(int)(d*h/a), (int)(d*w/a));
    return 0;
}