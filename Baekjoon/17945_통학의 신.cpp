#include <stdio.h>
#include <math.h>
double a, b;
int main() {
    scanf("%lf %lf",&a,&b);
    double p = -a + sqrt(a*a - b);
    double m = -a - sqrt(a*a - b);
    if (p == m) printf("%d",(int)p);
    else   printf("%d %d",(int)m,(int)p); 
}