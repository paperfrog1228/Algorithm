#include<stdio.h>
#include <queue>
#define MAX 1000
using namespace std;
int arr[MAX+2][MAX+2],n,m,count=0;
bool visit[MAX+2][MAX+2];
queue<int> qx2,qy2;
void Check(int a,int b){
    if(arr[a][b]==-1||visit[a][b])
        return;
    qx2.push(a);
    qy2.push(b);
    arr[a][b]=1;
    visit[a][b]=true;
}
void BFS(){
    while(!qx2.empty()&&!qy2.empty()){
        queue<int> qx,qy;
        swap(qx,qx2);
        swap(qy,qy2);
    while(!qx.empty()&&!qy.empty()){
    int x=qx.front();
    int y=qy.front();
    qx.pop();
    qy.pop();
    Check(x+1,y);//오
    Check(x-1,y);//왼
    Check(x,y+1);//위
    Check(x,y-1);//밑
    }
    count++;
    }
}
int main(){
    scanf("%d %d",&m,&n);
    for(int i=0;i<=n+1;i++)
    for(int j=0;j<=m+1;j++)
        arr[i][j]=-1;

    bool emptyCheck=true;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==0)
        emptyCheck=false;
        else if(arr[i][j]==1)
        Check(i,j);
    }
    if(emptyCheck){
        printf("0");
        return 0;
    }
    BFS();  
   
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){ 
        if(arr[i][j]==0){
            printf("-1");
            return 0;
        }
    }
    printf("%d",count-1);
    return 0;
}
