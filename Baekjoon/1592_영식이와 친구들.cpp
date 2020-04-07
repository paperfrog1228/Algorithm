#include<stdio.h>
int n,m,l,count[1004],ans=-1;
void Throw(int x){
    ans++;
    if(++count[x]==m){
        printf("%d",ans);
        return;
    }
    if(count[x]%2==1){
        if(x+l<=n)
        Throw(x+l);
        else(Throw((x+l)-n));
    }
    else{
        if(x-l>0)
        Throw(x-l);
        else(Throw((x-l)+n));
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&l);
    Throw(1);
}