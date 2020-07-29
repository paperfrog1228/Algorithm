#include<stdio.h>
#include<algorithm>
int n,q,a[300004],b[300004],s,e;
int main(){
    scanf("%d %d ",&n,&q);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    std::sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        b[i]=a[i]+b[i-1];
    for(int i=1;i<=q;i++){
        scanf("%d %d",&s,&e);
        printf("%d\n",b[e]-b[s-1]);
    }
}