#include<stdio.h>
#include<bitset>
std::bitset<1010> bs;
int n,k,cnt;
int main(){
    bs.set();
    scanf("%d %d",&n,&k);
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(bs[j])
            bs[j]=0,cnt++;
            if(cnt==k){
                printf("%d",j);
                return 0;
            }
        }
    }
}