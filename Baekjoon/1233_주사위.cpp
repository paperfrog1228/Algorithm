#include<stdio.h>
int cnt[88];
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    for(int i=1;i<=s1;i++)
    for(int j=1;j<=s2;j++)
    for(int k=1;k<=s3;k++)
    cnt[i+j+k]++;
    int max=0,ans=0;
    for(int i=s1+s2+s3;i>0;i--){
        if(max<=cnt[i]){
            max=cnt[i];
            ans=i;
        }
    }
    printf("%d",ans);
}