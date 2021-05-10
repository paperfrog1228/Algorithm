#include<bits/stdc++.h>
int n,ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=1000;i++)
    for(int j=1;j<=1000;j++)
    if(i*i==j*j+n) ans++;
    printf("%d",ans);
}
