#include <stdio.h>
char chess[9][9];
int main(){
    for(int i=0;i<8;i++)
    scanf("%s",chess[i]);
    int color=0,cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(chess[i][j]=='F'&&color%2==0)
                cnt++;
            color++;
        }
    color++;
    }
    printf("%d",cnt);
}