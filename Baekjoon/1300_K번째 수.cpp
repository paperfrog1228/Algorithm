#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
long long n,k,cnt,ans;
int main(){
    scanf("%lld %lld",&n,&k);
    long long left=0,right=k;
    while(left<=right){
        long long mid=(left+right)/2;
        cnt=0;
        for(int i=1;i<=n;i++) cnt+=min(mid/i,n);
        if(cnt<k) left=mid+1;
        else ans=mid,right=mid-1;
    }
    printf("%lld",ans);
}
