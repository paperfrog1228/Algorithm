#include<stdio.h>
void TestCase(){
    int n,m,sum=0,temp;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    if(sum<m)
    m=sum;
    printf("%d\n",m);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}