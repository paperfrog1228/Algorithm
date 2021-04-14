//wrong code
#include <bits/stdc++.h>
#define MAX 100000000000000
#define ll long long
using namespace std;
int n,l=0,r=1;
ll mn=MAX;
vector<ll> v,ans;
ll search(ll value,int ss,int ee){
    int s=ss,e=ee,m;
    ll ret=MAX,mmn=MAX;
    while(s<=e){
        m=(s+e)/2;
        if(abs(value-v[m])<=mmn)
        ret=v[m],mmn=abs(value-ret);
        if(value<v[m]) e=m-1;
        else s=m+1;
    }
    return ret;
}
void cal(int lll, int rr){
    if(lll<0||rr<0||lll>=n||rr>=n||lll>rr) return;
    ll tmp=search(-1*(v[l]+v[r]),lll,rr);
    if(mn>=abs(tmp+v[l]+v[r])){
        mn=abs(tmp+v[l]+v[r]);
        ans.clear();
        ans.push_back(tmp);
        ans.push_back(v[l]);
        ans.push_back(v[r]);
    }
}
int main(){
   scanf("%d",&n);
   v.resize(n);
   for(int i=0;i<n;i++) scanf("%lld",&v[i]);
   sort(v.begin(),v.end());
   while(l<r&&r<n){
       cal(0,l-1);
       cal(l+1,r-1);
       cal(r+1,n-1);
       if(mn<0) r++;
       else l++;
       if(l==r) r++;
   }
   sort(ans.begin(),ans.end());
   for(int i=0;i<3;i++)
   printf("%lld ",ans[i]);
}

//answer code
#include <bits/stdc++.h>
#define MAX 100000000000000
#define ll long long
using namespace std;
int n,l=0,r=1;
ll mn=MAX,ans[3];
vector<ll> v;
int main(){
    scanf("%d",&n);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%lld",&v[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            if(abs(v[i]+v[l]+v[r])<mn)
                ans[0]=v[i],ans[1]=v[l],ans[2]=v[r],mn=abs(v[i]+v[l]+v[r]);
            else if(v[i]+v[l]+v[r]<0) l++;
            else r--;
        }
    }
    for(int i=0;i<3;i++)
    printf("%lld ",ans[i]);
}
