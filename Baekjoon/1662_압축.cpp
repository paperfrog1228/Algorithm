#include<stdio.h>
char s[55];
long long Count(int i){
    long long cnt=0;
    bool flag=false;
    while(s[i]!='\0'){
        if(s[i]=='('){
            cnt--;
            cnt+=(s[i-1]-'0')*Count(i+1);
            int l=1,r=1;
            while(1){
                if(s[i]=='(')
                    l++;
                if(s[i]==')'){
                    r++;
                    if(l==r)
                    break;
                }
            i++;
            }
        }
        else if(s[i]==')')
            return cnt;
        else
            cnt++;
        i++;
    }
    return cnt;
}
int main(){
    scanf("%s",s);
    printf("%lld",Count(0));
}