#include<iostream>
#include<memory.h>
#include<string>
long long dp[33][33];
int n,l,i;
std::string ans;
//죽이고 싶다 이 문제
long long go(int nn,int ll){
    if(dp[nn][ll]!=-1) return dp[nn][ll];
    return dp[nn][ll]=go(nn-1,ll)+go(nn-1,ll-1);
}
void find(int nn, int ll, long long ii) {
    if(nn==0) return;
    if(ll==0) {
        for (int i=1;i<=nn;i++) ans+='0';
        return;
    }
    long long p=go(nn-1,ll);
    if(p > ii) {
        ans += '0';
        find(nn-1,ll,ii);
    }
    else {
        ans += '1';
        find(nn-1,ll-1,ii-p);
    }
}
 
int main(){
    scanf("%d %d %d",&n,&l,&i);
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=32;i++){
        dp[i][0]=1;
        dp[0][i]=1;
    }
    dp[0][0]=1;
    go(n,l);
    find(n,l,i-1);
    std::cout<<ans;
}
