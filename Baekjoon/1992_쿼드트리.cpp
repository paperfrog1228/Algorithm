#include<stdio.h>
int n,arr[68][68];
void QuadTree(int x,int y,int length);
void Check(int x,int y,int length){
    if(length==1){
        printf("%d",arr[x][y]);
        return;
    }
    int temp=arr[x][y];
    bool flag=true;
    for(int i=x;i<x+length;i++)
    for(int j=y;j<y+length;j++){
        if(temp!=arr[i][j]){
            flag=false;
            break;
        }
        temp=arr[i][j];
    }
    if(flag){
    printf("%d",temp);
    return;}
    printf("(");
    QuadTree(x,y,length/2);
    printf(")");
}
void QuadTree(int x,int y,int length){
    Check(x,y,length);
    Check(x+length,y,length);
    Check(x,y+length,length);
    Check(x+length,y+length,length);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        scanf("%1d",&arr[j][i]);
    Check(1,1,n);
}