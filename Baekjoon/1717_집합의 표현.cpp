#include<stdio.h>
int n,m,arr[1000002];
int Find(int i){
    if(arr[i]==i) return i;
    return arr[i]=Find(arr[i]);
}
int main(){
    int a,b,c;    
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n;i++)
    arr[i]=i;
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&n,&a,&b);
        n==1?Find(a)==Find(b)?printf("YES\n"):printf("NO\n"):arr[Find(a)]=Find(b);
    }
}