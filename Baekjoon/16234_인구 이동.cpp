#include <stdio.h>
#include <vector>
using namespace std;
struct XY{int x,y;};
vector<XY> list;
int n,l,r,arr[52][52],count,dir_x[4]={1,-1,0,0},dir_y[4]={0,0,1,-1},region_count=0,people_count=0;
bool visit[52][52];
void Move(int i,int j,int people){
    visit[i][j]=true;
    people=arr[i][j];
    people_count+=arr[i][j];
    XY xy;xy.x=i;xy.y=j;
    list.push_back(xy);
    for(int d=0;d<4;d++){
        int temp,x=i+dir_x[d],y=j+dir_y[d];
        if(arr[x][y]==0||visit[x][y])
            continue;
        people>arr[x][y]?temp=people-arr[x][y]:temp=arr[x][y]-people;
        if(l<=temp&&temp<=r){
            region_count++;
            Move(x,y,people);
        }
    }
}
int main(){
    scanf("%d %d %d",&n,&l,&r);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&arr[i][j]);
    vector<XY>::iterator itr;
    int temp;
    bool end=false;
    while(!end){
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        visit[i][j]=false;
        end=true;
        count++;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(visit[i][j])
                continue;
            Move(i,j,0);
            if(region_count!=0){
                temp=people_count/++region_count;
                for(itr=list.begin();itr!=list.end();itr++)
                    arr[(*itr).x][(*itr).y]=temp;
                end=false;
            }
            list.clear();
            people_count=0;
            region_count=0;
        }
    }
    printf("%d\n",--count);
}