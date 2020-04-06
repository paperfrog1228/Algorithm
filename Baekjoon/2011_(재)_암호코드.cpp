#include <stdio.h>
#define mod 1000000
#define exit {printf("0");return 0;}
char s[5005];
long long dp[5005]={1,2,0,};
int main(){
    scanf("%s",s);
    if(s[0]=='0') exit;
    int i=1;
    while(s[i]!='\0'){
        if((s[i-1]-48)*10+s[i]-48<27&&s[i-1]!='0'){
            if(i!=1)
            dp[i]=dp[i-1]%mod+dp[i-2]%mod;
        }
        else
            dp[i]=dp[i-1]%mod;
        if(s[i]=='0'){
            if(s[i-1]=='0'||s[i-1]-48>2)
                exit;
            dp[i]-=dp[i-1]%mod;
        }
        dp[i]=dp[i]%mod;
        i++;
    }
    printf("%lld\n",dp[i-1]);
}