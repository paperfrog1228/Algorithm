#include<stdio.h>
int ans=1;
void ParkSunMoon(int a){
    if(a<=1)
    return;
    ans*=a;
    a--;
    ParkSunMoon(a);
}
int main(){
    int n;
    scanf("%d",&n);
    ParkSunMoon(n);
    printf("%d",ans);
}