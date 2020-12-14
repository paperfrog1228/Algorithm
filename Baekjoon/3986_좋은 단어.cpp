#include<stdio.h>
#include<stack>
char s[100005];
int n,ans;
int main(){
    scanf("%d",&n);
    while(n>0){
        scanf("%s",s);
        std::stack<int> st;
        int i=0;
        while(s[i]!='\0'){
            if(st.empty())
            st.push(s[i]);
            else if(st.top()==s[i])
                st.pop();
            else st.push(s[i]);
            i++;
        }
        if(st.empty())
        ans++;
        n--;
    }
    printf("%d",ans);
}