#include<stdio.h>
int main(){
int n,l,d,a=1;
scanf("%d %d %d",&n,&l,&d);
while(a<=n){
for(int i=a*l+5*(a-1);i<a*l+a*5;i++){
    if(i%d==0){
    printf("%d",i);
    return 0;
    }
}
a++;
}
int i=0;
while(1)
{
    if((n*l+(n-1)*5+i)%d==0){
        printf("%d", n*l+(n-1)*5+i);
        return 0;
    }
    i++;    
}
}