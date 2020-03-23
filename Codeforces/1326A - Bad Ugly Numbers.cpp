#include<stdio.h>
void TestCase(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1\n");
        return;
    }
    printf("2");
    for(int i=1;i<n;i++)
        printf("3");
    printf("\n");       
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        TestCase();
}