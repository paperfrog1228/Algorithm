#include <stdio.h>
#include <stack>
using namespace std;
int t,n;
char input;
void Testcase(){
    stack<char> st;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf(" %1c",&input);
        if(input=='(')
        st.push(input);
        else{
            if(!st.empty()&&st.top()=='(')
                st.pop();
            else st.push(input);
        }
    }
    printf("%d\n",(st.size()/2));
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Testcase();
}