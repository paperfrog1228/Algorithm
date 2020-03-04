#include<stdio.h>
#include<math.h>
int main(){
    int a,s=0;
    for(int i=1;i<=10;i++){
        scanf("%d",&a);
        if(s+a>=100){
        std::abs(100-s)<std::abs(100-s-a)?s:s+=a;
        break;
        }
        s+=a;
    }
    printf("%d",s);
}