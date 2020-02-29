#include<stdio.h>
int n,m,ans=5000000;
char chess[52][52];
int Check(int x,int y){
    char temp1='W',temp2='B';
    int cnt1=0,cnt2=0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if(temp1==chess[i][j])
                cnt1++;
            if(temp2==chess[i][j])
                cnt2++;
        temp1=='W'?(temp1='B',temp2='W'):(temp1='W',temp2='B');
        }
        temp1=='W'?(temp1='B',temp2='W'):(temp1='W',temp2='B');
    }
    if(cnt1<cnt2)
    return cnt1;
    return cnt2;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%s",chess[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(i+8>n||j+8>m)
            continue;
        int check=Check(i,j);
        if(ans>check){
            ans=check;
        }
    }
    printf("%d",ans);
}