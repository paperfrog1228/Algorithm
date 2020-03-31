#include <stdio.h>
int arr[504][505],n,m,b,min_block=257,max_block=0;
int ans_time=999999999,ans_block=0;
void Check(int block){
    int time=0;
    int inventory=b;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if(arr[i][j]>block){
                time+=2*(arr[i][j]-block);
                inventory+=(arr[i][j]-block);
            }
            if(arr[i][j]<block){
                time+=(block-arr[i][j]);
                inventory-=(block-arr[i][j]);
            }
    }
    if(inventory<0)
        return;
    if(time<=ans_time){
        ans_time=time;
        if(ans_block<block)
        ans_block=block;
    }
}
int main(){
    scanf("%d %d %d",&m,&n,&b);
    if(n==0||m==0){
        printf("0 0");
        return 0;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            scanf("%d",&arr[i][j]);
            if(min_block>arr[i][j])
                min_block=arr[i][j];
            if(max_block<arr[i][j])
                max_block=arr[i][j];
    }

    for(int i=min_block;i<=max_block;i++)
        Check(i);
    printf("%d %d",ans_time,ans_block);
}