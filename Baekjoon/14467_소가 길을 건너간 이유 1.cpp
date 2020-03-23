#include<stdio.h>
int main(){
    int n,cow[11],a,b,ans=0;
    for(int i=1;i<=10;i++)
        cow[i]=5;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(cow[a]==5)
        cow[a]=b;
        if(cow[a]!=b){
            ans++;
            cow[a]=b;
        }
    }
    printf("%d",ans);
}