#include<stdio.h>
#include<stack>
std::stack<double> st;
char s[105];
int n,i;
double a[30];
int main(){
    scanf("%d %s",&n,s);
    for(int i=0;i<n;i++)
    scanf("%lf",&a[i]);
    while(s[i]!='\0'){
        if('A'<=s[i]&&s[i]<='Z')
            st.push(a[s[i]-'A']);
        else{
            double o1,o2;
            o1=st.top();st.pop();
            o2=st.top();st.pop();
            if(s[i]=='+')
                st.push(o1+o2);
            if(s[i]=='-')
                st.push(o2-o1);
            if(s[i]=='*')
                st.push(o1*o2);
             if(s[i]=='/')
                st.push(o2/o1);
        }
        i++;
    }
    printf("%.2lf",st.top());
}