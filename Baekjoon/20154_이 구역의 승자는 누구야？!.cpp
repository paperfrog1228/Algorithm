#include<iostream>
int a[27]={3,2,1,2,3,3,3,3,1,1,3,1,3,3,1,2,2,2,1,2,1,1,2,2,2,1},t;
char s[1000004];
int main(){
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
        t+=a[s[i]-'A'],i++;
    if(t%2==1) printf("I'm a winner!");
    else printf("You're the winner?");
}
