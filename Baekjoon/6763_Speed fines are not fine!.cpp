#include <stdio.h>
int a,b,c;
int main(){
    scanf("%d %d",&a,&b); c=b-a;
    if(c<=0) printf("Congratulations, you are within the speed limit!");
    else if(c<=20) printf("You are speeding and your fine is $100.");
    else if(c<=30) printf("You are speeding and your fine is $270.");
    else printf("You are speeding and your fine is $500.");
}
