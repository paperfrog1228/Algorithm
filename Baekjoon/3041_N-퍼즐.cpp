#include <stdio.h>
#include <math.h> 
char puzzle[4][4];
int ans; 
int main() { 
    for (int i=0;i<4;i++) 
    scanf("%s",puzzle[i]);  
    for (int i=0;i<4;i++) 
    for (int j=0;j<4;j++) 
    if (puzzle[i][j]!= '.') 
        ans+=(abs((puzzle[i][j]-'A')/4-i)+abs((puzzle[i][j]-'A')%4-j));
     printf("%d\n",ans);
}