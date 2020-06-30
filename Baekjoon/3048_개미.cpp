#include <stdio.h>
struct Ant{char a;int dir;};
Ant ant[30];
int a,b,t;
int main(){
    scanf("%d %d",&a,&b);
    for(int i=a;i>0;i--){
        scanf(" %c ",&ant[i].a);
        ant[i].dir=1;
    }
    for(int i=a+1;i<=a+b;i++){
        scanf(" %c ",&ant[i].a);
        ant[i].dir=2;
    }
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        for(int i=1;i<a+b;i++){
            if(ant[i].dir==1&&ant[i+1].dir==2){
                Ant temp=ant[i];
                ant[i]=ant[i+1];
                ant[i+1]=temp;
                i++;
           }
       }
    } 
    for(int i=1;i<=a+b;i++)
    printf("%c",ant[i].a);
}