#include<stdio.h>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int n,a[1000010],f[1000010],x;
vector<int> ans;
stack<pair<int,int>> st;
int main(){
    scanf("%d",&n);
    ans.resize(n+1);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]),f[a[i]]++;
    for(int i=n;i>=1;i--){
        while(!st.empty()&&f[a[i]]>=st.top().second)
        st.pop();
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top().first;
        st.push({a[i],f[a[i]]});
    }
    for(int i=1;i<=n;i++) printf("%d ",ans[i]);
}