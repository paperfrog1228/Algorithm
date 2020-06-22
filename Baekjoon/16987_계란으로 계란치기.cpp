#include<stdio.h>
struct Egg{int hp;int atk;};
Egg egg[10];
int n,max=0;
void Attack(int e,int i,int cnt){
     if(e>n||i==e||egg[i].hp<=0)
        return;
    int tempHpE=egg[e].hp;
    int tempHpI=egg[i].hp;
    if(egg[e].hp>0){
        egg[i].hp-=egg[e].atk;
        egg[e].hp-=egg[i].atk;
        if(egg[i].hp<=0)
            cnt++;
        if(egg[e].hp<=0)
            cnt++;
    }
    for(int j=1;j<=n;j++)
        Attack(e+1,j,cnt);
    egg[e].hp=tempHpE;
    egg[i].hp=tempHpI;
    if(max<cnt)
        max=cnt;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&egg[i].hp,&egg[i].atk);
    for(int i=2;i<=n;i++)
    Attack(1,i,0);
    printf("%d",max);
}