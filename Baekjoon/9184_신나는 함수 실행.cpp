#include<bits/stdc++.h>
using namespace std;
int dp[55][55][55];
int w(int a,int b,int c){
    if(a<=0||b<=0||c<=0) return 1;
    if (a>20||b>20||c>20) return w(20, 20, 20);
    if(dp[a][b][c]!=0) return dp[a][b][c];
    if(a<b&&b<c) dp[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    else dp[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    return dp[a][b][c];
}
int main(){
    int aa,bb,cc;
    while(1){
        scanf("%d %d %d",&aa,&bb,&cc); 
        if(aa==-1&&bb==-1&&cc==-1) return 0;
        printf("w(%d, %d, %d) = %d\n",aa,bb,cc,w(aa,bb,cc));
    }
}
