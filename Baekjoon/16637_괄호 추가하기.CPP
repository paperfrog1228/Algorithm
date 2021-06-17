#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll ans=-999999999987654321;
char c[44];
void f(int i,ll cnt){
    if(i>n){
        if(ans<cnt) ans=cnt;
        return;
    }
    int ssub=0,sub1=c[i+1]-'0',sub2=c[i+3]-'0';
    if(i+3<=n){
        char op2=c[i+2];
        if(op2=='+') ssub=sub1+sub2;
        if(op2=='-') ssub=sub1-sub2;
        if(op2=='*') ssub=sub1*sub2;
    }
    ll cnt2=cnt; char op=c[i];
    if(op=='+') cnt+=sub1,cnt2+=ssub;
    if(op=='-') cnt-=sub1,cnt2-=ssub;
    if(op=='*') cnt*=sub1,cnt2*=ssub;
    f(i+2,cnt);
    if(i+3<=n) f(i+4,cnt2);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf(" %c",&c[i]);
    f(2,c[1]-'0');
    printf("%lld",ans);
}