#include<stdio.h>
int score[8],visit[8],ans=0;
int main(){
    for(int i=0;i<8;i++)
    scanf("%d",&score[i]);
    for(int i=1;i<=5;i++){
        int max=0,index;
        for(int j=0;j<8;j++)
        if(max<score[j]&&!visit[j]){
            max=score[j];
            index=j;
        }
        ans+=max;
        visit[index]=1;
    }
    printf("%d\n",ans);
    for(int i=0;i<8;i++)
    if(visit[i])
    printf("%d ",i+1);
}