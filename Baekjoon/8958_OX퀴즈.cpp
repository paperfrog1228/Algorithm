#include<stdio.h>
int main(){
    int t;
    char s[86];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%s",s);
        int j=0,combo=0,ans=0;
        while(s[j]!='\0'){
            if(s[j]=='O'){
                combo++;
                ans+=combo;
            }
            else
            combo=0;
            j++;
        }
        printf("%d\n",ans);
    }
}