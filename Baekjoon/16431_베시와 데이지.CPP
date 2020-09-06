#include <stdio.h>
struct Pos{int x;int y;};
Pos b,d,j;
int bc,dc;
int abs(int a,int b){
    int ret=a-b;
    if(ret<0)
        ret*=-1;
    return ret;
}
int dist(Pos a,Pos b){
    return abs(a.x,b.x)+abs(a.y,b.y);
}
int main(){
    scanf("%d %d %d %d %d %d",&b.x,&b.y,&d.x,&d.y,&j.x,&j.y);
    dc=dist(d,j);
    if(abs(b.x,j.x)<abs(b.y,j.y)){
        if(b.x<j.x)
        b.x+=abs(b.x,j.x);
        else
        b.x-=abs(b.x,j.x);
    }
    else{
        if(b.y<j.y)
        b.y+=abs(b.y,j.y);
        else
        b.y-=abs(b.y,j.y);
    }
    bc=dist(b,j);
    if(bc==dc)
    printf("tie");
    else if(bc<dc)
    printf("bessie");
    else
    printf("daisy");
}