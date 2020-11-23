#include <stdio.h>
#include <math.h>
int n,r,c,ans,cnt;
void rec(int n,int y,int x){
    if(n==0){
        if(y==r&&x==c)
            ans=cnt;
        cnt++;
        return;
    }
    int temp=pow(2,n-1);
    int plus=temp*temp;
    if(r<y+temp&&c<x+temp)
        rec(n-1,y,x);
    else if(r<y+temp&&c>=x+temp)
        cnt+=plus,rec(n-1,y,x+temp);
    else if(r>=y+temp&&c<x+temp)
        cnt+=plus*2,rec(n-1,y+temp,x);
    else
        cnt+=plus*3,rec(n-1,y+temp,x+temp);
}
int main(){
    scanf("%d %d %d",&n,&r,&c);
    rec(n,0,0);
    printf("%d",ans);
}