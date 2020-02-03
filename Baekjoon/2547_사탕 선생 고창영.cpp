#include<stdio.h>
#define FOR(i,n) for(int i=1;i<=n;i++)
void Test(){
    int n;
    unsigned long long candy=0,a;
    scanf("%d",&n);
    FOR(i, n){
    scanf("%lld",&a);
    candy=(candy%n+a%n)%n;
    }
    if(candy%n==0)
    printf("YES\n");
    else
    printf("NO\n");
}
int main(){
  int t,m;
  scanf("%d",&t);
  FOR(i,t)
    Test();
}