#include<stdio.h>
int k,lotto[15],visit[15],ans[7],cnt=-1;
void Lotto(int i){
    if(visit[i])
        return;
    visit[i]++;
    cnt++;
    ans[cnt]=lotto[i];
    if(cnt<6)
        for(int j=i;j<=k;j++)
            Lotto(j);
    else{
        for(int i=1;i<=6;i++)
            printf("%d ",ans[i]);
        printf("\n");
    }
    visit[i]=0;
    cnt--;  
}
bool Test(){
    scanf("%d",&k);
    if(k==0)
    return true;
    for(int i=1;i<=k;i++)
        scanf("%d",&lotto[i]);
    Lotto(0);
    return false;
}
int main(){
    while(1){
        if(Test())
            return 0;
        printf("\n");
    }
}
