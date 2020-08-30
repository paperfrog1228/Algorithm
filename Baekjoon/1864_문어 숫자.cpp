#include<stdio.h>
char c[11]={'/','-','\\','(','@','?','>','&','%'},s[10];
int main(){
    while(1){
        scanf("%s",s);
        if(s[0]=='#')
            break;
        int i=0,j=0,ans=0,temp=1,tmp;
        while(s[i+1]!='\0')
            i++;
        while(i>=0){
            temp=1;
            for(int k=1;k<=j;k++)
                temp*=8;
            for(int k=0;k<10;k++)
                if(s[i]==c[k])
                    tmp=k-1;
            ans+=tmp*temp;
            i--,j++;
        }
        printf("%d\n",ans);
    }
}