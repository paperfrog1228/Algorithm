#include <stdio.h>
int n;
char s[104][16];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%s",s[i]);
    for(int i=1;i<=n;i++){
        int len=0;
        while(s[i][len]!='\0')
            len++;
        for(int j=i;j<=n;j++){
            int k=0;
            while(s[i][k]!='\0'&&
                s[j][len-k-1]!=' '&&
                s[j][len-k-1]!='\0'&&
                s[i][k]==s[j][len-k-1])
                    k++;
            if(len==k){
                printf("%d %c",len,s[i][len/2]);
                return 0;
                }
        }
    }
}