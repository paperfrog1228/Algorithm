#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,q,x,def,col,row,cntc,cntr;
int vr[1000005],vc[1000005];
char c;
int main(){
    scanf("%lld %lld",&n,&q);
    def=(n+1)*(n+2)/2-1;
    for(int i=1;i<=q;i++){
        scanf(" %c %lld",&c,&x);
        ll now=def+n*(x-1);
        if(c=='R'){
            if(vr[x]) {
                printf("0\n");
                continue;
            }
            now-=(col+(x-1)*cntc);
            printf("%lld\n",now);
            row+=(x+1);
            vr[x]++;
            cntr++;
        }
        else {
            if(vc[x]) {
                printf("0\n");
                continue;
            }
            now-=(row+(x-1)*cntr);
            printf("%lld\n",now);
            col+=(x+1);
            vc[x]++;
            cntc++;
        }
    }
}
