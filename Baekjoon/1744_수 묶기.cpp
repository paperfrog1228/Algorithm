#include<stdio.h>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int n,ans;
vector<int> p,m;
int main(){
    scanf("%d",&n);
    int t;
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(t>0)
        p.push_back(t);
        else m.push_back(t);
    }
    sort(p.begin(),p.end(),greater<int>());
    sort(m.begin(),m.end());
    for(int i=0;i<p.size();i+=2){
        if(i+1>=p.size()&&p.size()%2==1) break;
        if(p[i]+p[i+1]>p[i]*p[i+1])
        ans+=p[i]+p[i+1];
        else
        ans+=p[i]*p[i+1];
    }
    for(int i=0;i<m.size();i+=2){
        if(i+1>=m.size()&&m.size()%2==1) break;
        ans+=m[i]*m[i+1];
    }
    if(p.size()%2==1)
    ans+=*(p.end()-1);
    if(m.size()%2==1)
    ans+=*(m.end()-1);
    printf("%d",ans);
}