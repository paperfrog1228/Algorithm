#include<iostream>
#include<bitset>
#include<vector>
#define MAX 1000000
std::vector<int> prime;
std::bitset<MAX+5> bs;
int n;
int main(){
    bs.set();
    bs[0]=bs[1]=0;
    for(int i=2;i<=1004;i++){
        if(bs[i]==0) continue;
        prime.push_back(i);
        for(int j=i*i;j<=MAX;j+=i)
            bs[j]=0;
    }
    while(1){
        scanf("%d",&n);
        if(n==0) return 0;
        int i=0;
        while(prime[i]<=n){
            if(bs[n-prime[i]]){
            printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
            break;
            }
            i++;
        }
    }
}