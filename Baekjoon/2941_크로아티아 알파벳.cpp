#include<stdio.h>
char input[120];
int main(){
    int i=0,ans=0;
    scanf("%s",input);
    while(input[i]!='\0'){
        if(input[i]=='c')
            if(input[i+1]=='='||input[i+1]=='-'){
                ans++;
                i+=2;
                continue;
            }
        if(input[i]=='d'){
            if(input[i+1]=='z'&&input[i+2]=='='){
                i+=3;
                ans++;
                continue;
            }
            if(input[i+1]=='-'){
                ans++;
                i+=2;
                continue;
            }
        }
        if(input[i]=='l'||input[i]=='n')
            if(input[i+1]=='j'){
                i+=2;
                ans++;
                continue;
            }
        if(input[i]=='s'||input[i]=='z')
            if(input[i+1]=='='){
                ans++;
                i+=2;
                continue;
            }
            ans++;
            i++;  
   }
   printf("%d",ans);
}