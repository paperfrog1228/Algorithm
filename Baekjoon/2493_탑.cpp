#include <stack>
#include <vector>
#include <stdio.h>
using namespace std;
int n,tmp,ii;
struct tower{int h;int i;};
stack<tower> st;
vector<int> ans;
int main(){
    st.push({987654321,0});
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        while(st.top().h<=tmp)
            st.pop();
        ii=st.top().i;
        st.push({tmp,i});
        ans.push_back(ii);
    }
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
}