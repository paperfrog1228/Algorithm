#include<iostream>
int t,n;
char s[100];
int main(){
    scanf("%d",&t);
    while(t>0){
        scanf("%d %s",&n,s);
        int i=0;
        while(s[i]!='\0'){
            if(i!=n-1) printf("%c",s[i]);
            i++;
        }
        printf("\n");
        t--;
    }
}
