#include <stdio.h>
#include <string.h>
int t,a;
unsigned int mask;
char s[10];
int main() {
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%s",s);
        if(strcmp(s,"add")==0){
            scanf("%d",&a);
            mask|=(1<<a);
        }
        else if(strcmp(s,"remove")==0){
            scanf("%d",&a);
            mask&=~(1<<a);
        }
        else if(strcmp(s,"check")==0){
            scanf("%d",&a);
            if(mask&(1<<a))
            printf("1\n");
            else
            printf("0\n");
        }
        else if(strcmp(s,"toggle")==0){
            scanf("%d",&a);
            mask^=(1<<a);
        }
        else if(strcmp(s,"all")==0)
            mask=(1<<21)-1;
        else if(strcmp(s,"empty")==0)
            mask=0;
    }
}