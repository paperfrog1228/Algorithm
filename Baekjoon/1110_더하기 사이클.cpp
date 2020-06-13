#include <stdio.h>
int check[1000],tmp,tmp2,cnt=1;
int main(){
   scanf("%d",&tmp);
   while(1){
       if(check[tmp]){
        tmp2=tmp;
        break;
       }
    check[tmp]++;
   }
   while(1){
       tmp=tmp%10*10+(tmp/10+tmp%10)%10;
        if(tmp2==tmp){
            printf("%d",cnt);
            return 0;
        }
        cnt++;
   }
}