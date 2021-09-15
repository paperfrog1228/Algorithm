#include <stdio.h>
#include<bitset>
using namespace std;
bitset<4000010> bs;
long long a,b,d;
int ans;
int main(){
    bs.set();
    bs[0]=bs[1]=0;
    for(int i=2;i<=2020;i++){
        if(bs[i]==0) continue;
        for(long long j=i*i;j<=4000010;j+=i)
            bs[j]=0;
    }
    scanf("%lld %lld %lld",&a,&b,&d);
    for(long long i=a;i<=b;i++){
        if(!bs[i]) continue;
        long long tmp=i;
        while(tmp>0){
            if(tmp%10==d) {
                ans++;
                break;
            }
            tmp/=10;
        }
    }
    printf("%d",ans);
}