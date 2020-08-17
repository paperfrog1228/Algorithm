#include<stdio.h>
int n,m,min,t,d;
char s[1004][55],ans[55];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%s",s[i]);
    for(int i=0;i<m;i++){
        int a[27]={0,},max=0,max_i=0;
        for(int j=1;j<=n;j++){
            a[s[j][i]-'A']++;
            t=a[s[j][i]-'A'];
            if(t>=max){
                if(t==max&&s[j][i]-'A'>max_i)
                    continue;
                max=t;
                max_i=s[j][i]-'A';
            }
        }
        ans[i]=max_i+'A';
    }
    for(int i=1;i<=n;i++)
    for(int j=0;j<m;j++)
    if(s[i][j]!=ans[j])
    d++;
    printf("%s\n%d",ans,d);
}