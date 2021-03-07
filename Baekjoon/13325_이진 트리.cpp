#include<iostream>
#include<algorithm>
#define MAX (2<<20)+10
int n,t[MAX];
long long dp[MAX],ans;
long long fun(int i){
    if(i>((2<<(n-1))-1))return dp[i]=t[i];
    dp[i]=std::max(fun(i*2),fun(i*2+1));
    ans+=dp[i]-dp[i*2]+dp[i]-dp[i*2+1];
    return dp[i]+=t[i];
}
int main(){
    scanf("%d",&n);
    for(int i=2;i<(2<<n);i++) scanf("%d",&t[i]),ans+=t[i];
    fun(1);
    printf("%lld",ans);
}

