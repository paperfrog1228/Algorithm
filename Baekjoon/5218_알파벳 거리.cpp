#include<stdio.h>
int n;
void Test(){
    char a[30],b[30];
    scanf("%s %s",a,b);
    printf("Distances: ");
    int i=0,ans;
    while(a[i+1]!='\0'){
        b[i]-a[i]<0?ans=26+b[i]-a[i]:ans=b[i]-a[i];
        printf("%d ",ans);
        i++;
    }
    b[i]-a[i]<0?ans=26+b[i]-a[i]:ans=b[i]-a[i];
    printf("%d\n",ans);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    Test();
}