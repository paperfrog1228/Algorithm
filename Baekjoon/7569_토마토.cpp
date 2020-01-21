#include<stdio.h>
#include <queue>
#define MAX 100
using namespace std;
struct Tomato{
    int x;
    int y;
    int z;
};
int n,m,h,arr[MAX+2][MAX+2][MAX+2],ans=0;
bool ripe_all=true,visit[MAX+2][MAX+2][MAX+2];
queue<Tomato> tempQ;
void Check(Tomato t){
    if(n<t.x||t.x<1||m<t.y||t.y<1||h<t.z||t.z<1)
    return;
    if(visit[t.x][t.y][t.z]||arr[t.x][t.y][t.z]==-1)
    return;
    visit[t.x][t.y][t.z]=true;
    arr[t.x][t.y][t.z]=1;
    tempQ.push(t);
}
void BFS(){
    while(!tempQ.empty()){
        queue<Tomato> tomatoQ;
        swap(tempQ,tomatoQ);
        while(!tomatoQ.empty()){
        Tomato t=tomatoQ.front();
        tomatoQ.pop();
        int x=t.x;
        int y=t.y;
        int z=t.z;
        t.x=x-1;//¿Þ
        Check(t);
        t.x=x;
        t.x=x+1;//¿À
        Check(t);
        t.x=x;
        t.y=y-1;//ÇÏ
        Check(t);
        t.y=y;
        t.y=y+1;//»ó
        Check(t);
        t.y=y;
        t.z=z-1;//¹Ø
        Check(t);
        t.z=z;
        t.z=z+1;//À§
        Check(t);
        }
    
        ans++;
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&h);
    for(int i=1;i<=h;i++)
    for(int j=1;j<=m;j++)
    for(int k=1;k<=n;k++){
    scanf("%d",&arr[k][j][i]);
    if(arr[k][j][i]==0)
        ripe_all=false;
    if(arr[k][j][i]==1){
        Tomato t;
        t.x=k,t.y=j,t.z=i;
        Check(t);
    }
    }
    if(ripe_all){
        printf("0");
        return 0;
    }
    BFS();
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    for(int k=1;k<=h;k++)
    if(arr[i][j][k]==0){
        printf("-1");
        return 0;
    }
    printf("%d",ans-1);
    return 0;
}