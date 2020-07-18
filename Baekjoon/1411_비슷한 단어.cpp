#include<stdio.h>
int n,cnt;
char s[104][55];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%s",s[i]);
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++){
        int k=0,a[27],b[27];
        for(int l=0;l<=26;l++){
            a[l]=-1;
            b[l]=-1;
        }
        bool ans=true;
        while(s[i][k]!='\0'&&s[j][k]!='\0'){
            if(a[s[i][k]-97]==-1)
                a[s[i][k]-97]=s[j][k];
            if(b[s[j][k]-97]==-1)
                b[s[j][k]-97]=s[i][k];
            if((a[s[i][k]-97]!=s[j][k])||(b[s[j][k]-97]!=s[i][k])){
                ans=false;
                break;
            }
            k++;
        }
        if(ans)
        cnt++;
    }
    printf("%d",cnt);
}