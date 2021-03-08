#include<iostream>
#include<stack>
int n,tmp,ans;
char c;
std::stack<int> s;
int main(){
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&c);
        if(c=='(') s.push(-1);
        else{
            tmp=0;
            bool flag=true;
            while(!s.empty()){
                if(s.top()==-2) break;
                if(s.top()==-1) {
                    if(flag)
                        s.pop(),tmp+=2,flag=false;
                    else break;
                }
                else tmp+=s.top(),s.pop();
            }
            s.push(tmp);
            if(flag) s.push(-2);
        }
        if(tmp>ans) ans=tmp;
    }
    printf("%d",ans);
}
