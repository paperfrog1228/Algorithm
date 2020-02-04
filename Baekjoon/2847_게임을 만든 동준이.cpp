#include<stdio.h>
int main(){
    int n,arr[102],ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(int i=n-1;i>=1;i--){
        if(arr[i]>=arr[i+1]){
        ans+=(arr[i]-arr[i+1]+1);
        arr[i]=arr[i+1]-1;
        }
    }
    printf("%d\n",ans);
}