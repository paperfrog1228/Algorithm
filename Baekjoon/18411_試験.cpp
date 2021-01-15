#include <iostream>
int a[3],b,bi,c;
int main(){
    for(int i=0;i<3;i++)scanf("%d",&a[i]);
    for(int i=0;i<3;i++)
        if(b<a[i]) b=a[i],bi=i;
    for(int i=0;i<3;i++)
        if(c<a[i]&&i!=bi) c=a[i];
    printf("%d",b+c);
}