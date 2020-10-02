#include<stdio.h>
int a,b;
int get(int n,int m1,int m2){
    int ten=1,tmp=0,tn=n;
    while(tn/10>0)
        tn/=10,ten*=10;
    while(ten>0){
        if(n/ten==m1)
            tmp+=m2*ten;
        else tmp+=n/ten*ten;
        n%=ten;
        ten/=10;
    }
    return tmp;
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%d %d",get(a,6,5)+get(b,6,5),get(a,5,6)+get(b,5,6));
}