#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
struct node{long long w;int s;int e;};
int n,m,a,b,s,e,p[100004];
vector<node> v;
ll c,ans;
bool cmp(node &n1,node &n2){
    return n1.w>n2.w;
}
int find(int a){
    if (a == p[a]) return a;
	return p[a] = find(p[a]);
}
bool uni(int a, int b) {
	a=find(a);b=find(b);
	if(a==b)
		return false;
	p[b]=a;
	return true;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=1;i<=m;i++) scanf("%d %d %lld",&a,&b,&c),v.push_back({c,a,b});
    sort(v.begin(),v.end(),cmp);
    scanf("%d %d",&s,&e);
    for (int i=0;i<m;i++) {
		int n1 = v[i].s;
		int n2 = v[i].e;
		ll cost = v[i].w;
		if (find(s) != find(e)) {
			uni(n1,n2);
			ans = cost;
		}
        else break;
	}
    printf("%lld",ans);
