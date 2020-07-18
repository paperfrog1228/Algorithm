#include<stdio.h>
char s[505];
int main(){
    scanf("%s",s);
    int i=0,cnt=0;
    while(s[i]!='\0'){
        cnt=0;
        if(s[i]=='.'){
            i++;
            continue;
        }
        while(s[i]=='X'){
            cnt++;
            i++;
            if(cnt==4)
            break;
        }
        if(cnt==4||cnt==0){
            for(int j=cnt;j>0;j--)
            s[i-j]='A';
        }
        else if(cnt==2)
            for(int j=2;j>0;j--)
            s[i-j]='B';
        else{
            printf("-1");
            return 0;
        }
    }
    printf("%s",s);
}