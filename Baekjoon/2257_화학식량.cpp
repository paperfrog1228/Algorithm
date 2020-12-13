#include<stdio.h>
#include<stack>
std::stack<int> st;
char s[105];
int i,ans;
int main(){
    scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]=='H') st.push(1);
        if(s[i]=='C') st.push(12);
        if(s[i]=='O') st.push(16);
        if(s[i]=='(') st.push(0);
        if(s[i]==')') {
            int tmp=0;
            while(1){
                tmp+=st.top();
                if(st.top()==0&&!st.empty()){
                    st.pop();
                    break;
                }
                st.pop();
            }
            st.push(tmp);
        }
        if('2'<=s[i]&&s[i]<='9'&&!st.empty()){
            int tmp=st.top();
            st.pop();
            st.push(tmp*(s[i]-'0'));
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    printf("%d",ans);
}