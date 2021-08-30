#include<stdio.h>
#include<algorithm>
using namespace std;
long long w,h,f,c,x1,y1,x2,y2;
long long all,cx,ww,yy;
//시발!
int main(){
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&w,&h,&f,&c,&x1,&y1,&x2,&y2);
    all=w*h; yy=y2-y1; c++;
    cx=min(w-f,f);
    if(cx<=x1){
        printf("%lld",all-(x2-x1)*yy*c);
        return 0;
    }
    if(x2<=cx) ww=x2-x1;
    else ww=cx-x1;
    all-=ww*yy*c*2;
    if(cx<x2)
    all-=(x2-cx)*yy*c;
    printf("%lld",all);
}