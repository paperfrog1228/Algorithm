#include<iostream>
#include<string>
#include<stack>
using namespace  std;
string s;
bool Check(string s){
    stack<char> st;
    for(auto c:s){
        if(c==')'&&!st.empty()&&st.top()=='(')
        st.pop();
        else if(c==']'&&!st.empty()&&st.top()=='[')
        st.pop();
        else if(c=='('||c=='['||c==')'||c==']')
        st.push(c);
    }
    return st.empty();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1){
        getline(cin,s);
        if(s==".")
        return 0;
        if(Check(s))
        cout<<"yes\n";
        else  cout<<"no\n";
    }
}