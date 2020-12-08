#include<iostream>
#include<stack>
int n;
int main(){
    scanf("%d",&n);
    while(n>0){
        bool ans=true;
        char s[10003];
        std::stack<char> st;
        scanf("%s",s);
        int i=0;
        while(s[i]!='\0'){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else if(st.empty()){ans= false;break;}
            if(s[i]==')'&&st.top()=='(') st.pop();
            if(s[i]=='}'&&st.top()=='{') st.pop();    
            if(s[i]==']'&&st.top()=='[') st.pop();
            i++;
        }
        if(!st.empty()||!ans)  printf("NO\n");
        else printf("YES\n");
        n--;
    }
}