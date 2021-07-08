#include<bits/stdc++.h>
int a[100004],j,dp[5][5][100004];
int go(int l,int r,int i){
    int& ret=dp[l][r][i];
    if(i==j) return 0;
    if(ret!=-1) return ret;
    int ll,rr,cnt1=0,cnt2=0;
    if(l==a[i]) cnt1=1;
    else if(l==0) cnt1=2;
    else if((l==1||l==3)&&(a[i]==2||a[i]==4)) cnt1=3;
    else if((l==2||l==4)&&(a[i]==1||a[i]==3)) cnt1=3;
    else cnt1=4;
    if(r==a[i]) cnt2=1;
    else if(r==0) cnt2=2;
    else if((r==1||r==3)&&(a[i]==2||a[i]==4)) cnt2=3;
    else if((r==2||r==4)&&(a[i]==1||a[i]==3)) cnt2=3;
    else cnt2=4;
    ll=go(a[i],r,i+1)+cnt1;
    rr=go(l,a[i],i+1)+cnt2;
    return ret=std::min(ll,rr);
}
int main(){
    memset(dp,-1,sizeof(dp));
    while(++j) {
        scanf("%d",&a[j]);
        if(a[j]==0) break;
    }
    printf("%d",go(0,0,1));
}