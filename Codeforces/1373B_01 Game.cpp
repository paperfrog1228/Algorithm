#include<stdio.h>
int t;
char s[105];
void Testcase(){
    int cnt_one=0,cnt_zero=0,i=0,min=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]=='0')
        cnt_zero++;
        else
        cnt_one++;
        i++;
    }
    cnt_zero<cnt_one?min=cnt_zero:min=cnt_one;
    if(min%2==1)
    printf("DA\n");
    else
    printf("NET\n");
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Testcase();
}