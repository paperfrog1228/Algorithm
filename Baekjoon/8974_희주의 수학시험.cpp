#include<stdio.h>
int a,b;
int Get(int t){
    int r=0,i=0,n=0;
    while(1){
        for(int j=1;j<=i;j++){
            if(n>=t) return r;
            r+=i,n++;
        }
        i++;
    }
    return r;
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%d",Get(b)-Get(a-1));
}