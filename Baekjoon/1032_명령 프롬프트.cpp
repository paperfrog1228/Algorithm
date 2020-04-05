#include <stdio.h>
int main(){
    int n;
    char s[55][55];
    char ans[55];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",s[i]);
    int j=0;
    while(s[0][j]!='\0'){
        char temp=s[0][j];
        for(int i=1;i<n;i++){
            if(temp!=s[i][j]){
                temp='?';
                break;
            }
        }
        ans[j]=temp;
        j++;
    }
    for(int i=0;i<j;i++)
    printf("%c",ans[i]);
}