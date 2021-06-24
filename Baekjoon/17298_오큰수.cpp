#include<bits/stdc++.h>
using namespace std;
int n,a[1000010];
stack<int> st;
vector<int> ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=n;i>=1;i--){
        if(st.empty()){
            ans.push_back(-1);
            st.push(a[i]);            
            continue;
        }
        while(!st.empty()&&st.top()<=a[i]) st.pop();
        if(!st.empty()) ans.push_back(st.top());
        else ans.push_back(-1);
        st.push(a[i]);
    }
    for(int i=n-1;i>=0;i--) printf("%d ",ans[i]);
}