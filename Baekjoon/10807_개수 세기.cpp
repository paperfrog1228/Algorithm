#include <iostream>
int n,v,arr[102],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    scanf("%d",&v);
    for(int i=1;i<=n;i++) if(arr[i]==v) ans++;
    printf("%d",ans);
}
