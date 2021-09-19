#include<string>
int n;
double ans=1;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) ans/=2;
    printf("%.*f",n,ans);
}