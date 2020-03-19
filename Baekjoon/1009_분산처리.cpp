#include<stdio.h>
void TestCase(){
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a%10;
    if(temp==0){
        printf("10\n");
        return;
    }
    for(int i=2;i<=b;i++){
        temp*=a;
        temp%=10;
    }
    printf("%d\n",temp%10);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}