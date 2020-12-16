#include<stdio.h>
#include<stack>
std::stack<int> st1,st2,st3;
char s1[90],s2[90];
int a,b,c,i,add;
int main(){
    scanf("%s %s",s1,s2);
    while(s1[i]!='\0')
        st1.push(s1[i]-'0'),i++;
    i=0;
    while(s2[i]!='\0')
        st2.push(s2[i]-'0'),i++;
    while(!st1.empty()||!st2.empty()){
        a=b=0;
        if(!st1.empty())
            a=st1.top(),st1.pop();
        if(!st2.empty())
            b=st2.top(),st2.pop();
        c=a+b+add;
        if(c>=2)
        st3.push(c%2),add=1;
        else
        st3.push(c),add=0;
    }
    if(add>0)
        st3.push(add);
    bool zero=true;
    while(!st3.empty()){
        if(st3.top()==1)
        zero=false;
        if(!zero||st3.top()!=0)
        printf("%d",st3.top());
        st3.pop();
    }
    if(zero)
    printf("0");
}