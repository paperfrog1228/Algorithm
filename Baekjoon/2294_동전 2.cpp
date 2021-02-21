#include<iostream>
#include<stdio.h>
int n,k,a;
long long dp[100005];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++) dp[i]=-1;
    for(int i=1;i<=n;i++) scanf("%d",&a),dp[a]=1;
    for(int i=1;i<=k;i++){
        long long min=987654321;
        if(dp[i]==1) continue;
        for(int j=1;j<i;j++){
            if(dp[j]==-1||dp[i-j]==-1) continue;
            if(dp[j]+dp[i-j]<min) min=dp[j]+dp[i-j];
        }
        if(min!=987654321)
        dp[i]=min;
    }
    printf("%lld",dp[k]);
}
