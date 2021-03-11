#include<iostream>
#include<memory.h>
#define MIN -987654321
int n,m,arr[110],dp[110][110];//1부터 n 인덱스까지의 1차원 배열에서 m개의 구간을 선택했을 때 합의 최댓값을 의미합니다.;
//내 코드 아님. 개어렵네 진짜
int go(int n,int m){
    if(m==0) return 0; 
    if(n<=0) return MIN;
    if(dp[n][m]!=-1) return dp[n][m]; 
    int sum = 0; // 3: n번째 인덱스가 구간에 포함되지 않는 경우. 재귀이기 때문에 그 이전의 모든 경우의 수가 계산된다. 
    dp[n][m]=go(n-1,m);
    for(int i=n;i>0;i--){ 
        // 1: 누적합을 이용해서 1개의 구간을 구한다. (i부터 n까지의 구간) 
        sum += arr[i]; 
        // 2: 인접하지 않는 범위에서 m - 1개의 구간의 합의 최댓값을 구한다. 
        int tmp=go(i-2,m-1)+sum;
        if(tmp>dp[n][m]) dp[n][m] = tmp; 
    }
    return dp[n][m];
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    memset(dp,-1,sizeof(dp));
    printf("%d",go(n,m));
}
