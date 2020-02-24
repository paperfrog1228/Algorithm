#include<stdio.h>
char ans[105][105],s[52];
int main(){
    int r,c,a,b;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
    scanf("%s",s);
        for(int j=0;j<c;j++){
            ans[i][j]=s[j];
            ans[2*r-i-1][j]=s[j];
            ans[i][2*c-j-1]=s[j];
            ans[2*r-i-1][2*c-j-1]=s[j];
        }
    }
    scanf("%d %d",&a,&b);
    ans[a-1][b-1]=='.'?ans[a-1][b-1]='#':ans[a-1][b-1]='.';
    for(int i=0;i<r*2;i++){
        for(int j=0;j<c*2;j++)
            printf("%c",ans[i][j]);
        printf("\n");
    }
}