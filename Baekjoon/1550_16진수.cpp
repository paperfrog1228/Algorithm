#include <stdio.h>
using namespace std;
char s[10];
long long ans,tmp=1,i;
int main(){
        scanf("%s",s);
        while(s[i]!='\0')i++;
        for(int j=i-1;j>=0;j--){
                if ('0'<=s[j]&& s[j]<='9')
                        ans+=(s[j]-'0')*tmp;
                else
                ans+=(s[j]-'A'+10)*tmp;
                tmp*=16;
        }
        printf("%lld",ans);
}