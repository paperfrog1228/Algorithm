#include<stdio.h>
#include<stack>
using namespace std;
stack<int> ls[7];
int n,m,l,p,ans;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&l,&p);
        if(ls[l].empty()) {
            ls[l].push(p),ans++;
            continue;
        }
        if(ls[l].top()==p) continue;
        if(ls[l].top()<p) {
            ls[l].push(p),ans++;
            continue;
        }
        while(!ls[l].empty()&&ls[l].top()>p)ls[l].pop(),ans++;
        if(!ls[l].empty()&&ls[l].top()==p) continue;
        ls[l].push(p),ans++;
    }
    printf("%d",ans);
}
