#include<stdio.h>
int a,b,c,d,x,y,m=987654321,mx,my;
int main(){
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&x,&y);
    int q=x,w=y,e;
    while(w!=0)
        e=q%w,q=w,w=e;
    x/=q,y/=q;
    for(int i=0;i<=10000;i++){
        long xx=a-(c+x*i);
        long yy=b-(d+y*i);
        if(xx*xx+yy*yy<m){
            m=xx*xx+yy*yy;
            mx=c+x*i;
            my=d+y*i;
        }
    }
    printf("%d %d",mx,my);
}