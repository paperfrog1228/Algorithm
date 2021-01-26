#include <iostream>
char s[12][12];
int n,m; 
int main() {
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",s[i]);
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--)
            printf("%c",s[i][j]);
        printf("\n");
    }
}