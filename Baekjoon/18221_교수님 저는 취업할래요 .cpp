#include<stdio.h>
#include<algorithm>
int n,x,y,px,py,a,b,c,d,cnt,mp[1010][1010];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&mp[i][j]);
        if(mp[i][j]==2) x=i,y=j;
        if(mp[i][j]==5) px=i,py=j;
    }
    if((x-px)*(x-px)+(y-py)*(y-py)<25){
        printf("0");
        return 0;
    }
    a=std::min(x,px);
    b=std::max(x,px);
    c=std::min(y,py);
    d=std::max(y,py);
    for(int i=a;i<=b;i++)
    for(int j=c;j<=d;j++)
        if(mp[i][j]==1) cnt++;
    if(cnt<3){
        printf("0");
        return 0;
    }
    printf("1");
}