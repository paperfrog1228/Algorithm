#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
using namespace std;
int n;
bitset<10000010> bs;
vector<int> prime;
int main(){
    bs.set();
    for(int i=2;i<=300000;i++){
        if(bs[i]==0) continue;
        prime.push_back(i);
        bs[i]=0;
        for(int j=i*2;j<=300000;j+=i) bs[j]=0;
    }
    sort(prime.begin(),prime.end());
    while(scanf("%d",&n)&&n!=0){
        int cnt=0;
        vector<int>::iterator now=lower_bound(prime.begin(),prime.end(),n);
        if(*now==n) ++now;
        for(;now<prime.end()&&*now<=2*n;++now)cnt++;
        printf("%d\n",cnt);
    }
}
