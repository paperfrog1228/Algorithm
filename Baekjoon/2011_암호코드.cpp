#include <stdio.h>
#define mod 1000000
unsigned long long dp[5050];
char s[5050];
int main() {
    scanf("%s",s);
    dp[0]=1;
    dp[1]=1;
    if(s[0]=='0'){
        printf("0");
        return 0;
    }
    if(s[1]=='\0'){
        printf("1");
        return 0;
    }
    if(s[1]!='0'&&(s[0]-'0')*10+(s[1]-'0')<=26)
        dp[1]=dp[1]+dp[0];
    if(s[1]=='0'&&(s[0]-'0')*10+(s[1]-'0')>26){
        printf("0");
        return 0;
    }
    int i=2;
    while(s[i]!='\0'){
        dp[i]=dp[i-1];
        if(s[i]=='0'){
            dp[i]=dp[i-2];
            i++;
            continue;
        }
        if(s[i-1]!='0'&&(s[i-1]-'0')*10+(s[i]-'0')<=26)
            dp[i]=(dp[i]%mod)+(dp[i-2]%mod);
        i++;
   }
   i--;
   printf("%lld",dp[i]%mod);
}