#include<stdio.h>
int n,x;
int main(){
   scanf("%d",&n);
   while(n--){
       scanf("%d",&x);
       bool flag=true;
       printf("Pairs for %d:",x);
       for(int i=1;i<=12;i++)
       for(int j=1;j<=12;j++){
            if(j<=i||i+j!=x) continue;
            if(flag) printf(" %d %d",i,j),flag=false;
            else printf(", %d %d",i,j);
       }
       printf("\n");
   }
}