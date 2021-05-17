#include<bits/stdc++.h>
int a,b;
int main(){
    scanf("%d %d",&a,&b);
    if(a>=3&&b<=4) printf("TroyMartian\n");
    if(a<=6&&b>=2) printf("VladSaturnian\n");
    if(a<=2&&b<=3) printf("GraemeMercurian\n");
}
