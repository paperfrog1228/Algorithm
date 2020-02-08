#include<stdio.h>
int n,paper[130][130],blue=0,white=0,count=0;
void Cut(int startX,int endX,int startY,int endY){
    int tempB=0,tempW=0;
    for(int i=startX;i<=endX;i++)
    for(int j=startY;j<=endY;j++){
        if(paper[i][j]==0)
            tempW++;
        else if(paper[i][j]==1)
            tempB++;
        if(tempW>0&&tempB>0)
            goto exit;
    }
    exit:
    if(tempW==0){
        blue++;
        return;
    }
    if(tempB==0){
        white++;
        return;
    }
    int midX=(startX+endX)/2;
    int midY=(startY+endY)/2;
    Cut(startX,midX,startY,midY);//1사분면
    Cut(midX+1,endX,startY,midY);//2사분면
    Cut(startX,midX,midY+1,endY);//4사분면
    Cut(midX+1,endX,midY+1,endY);//3사분면
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&paper[i][j]);
    Cut(1,n,1,n);
    printf("%d\n%d",white,blue);
}