#include<stdio.h>
#include<algorithm>
int n,arr[5004],dp[5004][5004];
//다른 사람 풀이 봄. 개 어렵네 진짜
int p(int x,int y){
    if(x>=y) return 0;
    if(dp[x][y]>=0) return dp[x][y];
    if(arr[x]==arr[y]) return dp[x][y]=p(x+1,y-1);
    else return dp[x][y]=std::min(p(x+1,y),p(x,y-1))+1;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    for(int j=0;j<=n;j++)
    dp[i][j]=-1;
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    printf("%d",p(1,n));
}