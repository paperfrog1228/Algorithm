#include<stdio.h>
#include<stack>
using namespace std;
stack<char> st;
char s[100004],temp=' ';
int main(){
    scanf("%s",s);
    int i=0,cnt=0;
    while(s[i]!='\0'){
        if(s[i]=='(')
        st.push(s[i]);
        if(s[i]==')'){
            if(temp=='('){
                cnt+=(st.size()-1);
                st.pop();
            }
            else {
                cnt++;
                st.pop();
            }
        }
        temp=s[i];
        i++;
    }
    printf("%d",cnt);
}