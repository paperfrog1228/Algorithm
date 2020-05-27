#include<stdio.h>
int main(){
    char s[10];
    for(int i=1;i<=3;i++){
        int max=0,j=1,temp=1;
        scanf("%s",s);
        while(s[j]!='\0'){
            if(s[j-1]==s[j])
            temp++;
            else temp=1;
            if(max<temp)
            max=temp;
            j++;
        }
        printf("%d\n",max);
    }
}