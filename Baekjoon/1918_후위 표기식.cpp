#include<bits/stdc++.h>
using namespace std;
string s,ans;
int br;
stack<char> st;
queue<char> q;
void print(int t){
    while(!q.empty()) ans+=q.front(),q.pop();
    while(!st.empty()&&st.top()>=t){
        int c=st.top();st.pop();
        if(c%4==1) ans+='+';
        if(c%4==2) ans+='-';
        if(c%4==3) ans+='*';
        if(c%4==0) ans+='/';
    }
}
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') br++;
        if(s[i]==')') br--;
        if('A'<=s[i]&&s[i]<='Z') q.push(s[i]);
        if(s[i]=='+'||s[i]=='-'){
            int t1=1+br*4,t2=2+br*4,tmp;
            s[i]=='+'?tmp=t1:tmp=t2;
            if(!st.empty()&&st.top()>=t1) print(t1);
            st.push(tmp);
        }
        if(s[i]=='*'||s[i]=='/'){
            int t1=3+br*4,t2=4+br*4,tmp;
            s[i]=='*'?tmp=t1:tmp=t2;
            if(!st.empty()&&st.top()>=t1) print(t1);
            st.push(tmp);
        }
    }
    print(0);
    cout<<ans;
}
