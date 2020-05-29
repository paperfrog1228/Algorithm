#include<stdio.h>
struct dist{int x;int y;int w;};
int n,m,map[104][104],visit[104][104],count=0;
dist d[4]={{0,-1},{0,1},{-1,0},{1,0}},heap[10004];
void Push(dist p){
    heap[count]=p;
    int now=count++;
    int parent=(now-1)/2;
    while(now>0){
        if(heap[parent].w>heap[now].w){
            dist tmp=heap[parent];
            heap[parent]=heap[now];
            heap[now]=tmp;
            now=parent;
            parent=(now-1)/2;
        }
        else break;
    }
}
dist Pop(){
    dist ret=heap[0];
    heap[0]=heap[--count];
    int now=0,left=1,right=2,target=now;
    while(left<count){
        if(heap[target].w>heap[left].w)
        target=left;
        if(heap[target].w>heap[right].w&&right<count)
        target=right;
        if(target==now)
        break;
        dist tmp=heap[now];
        heap[now]=heap[target];
        heap[target]=tmp;
        now=target;
        left=now*2+1;
        right=now*2+2;
    }
    return ret;
}
void Check(dist p){
    for(int i=0;i<4;i++){
        int nx=p.x+d[i].x;
        int ny=p.y+d[i].y;
        if(nx<=0||ny<=0||nx>n||ny>m)
        continue;
        if(visit[nx][ny])
        continue;
        visit[nx][ny]++;
        dist newDist={nx,ny,p.w};
        if(map[nx][ny]==1)
        newDist.w++;
        Push(newDist);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    dist start={1,1},end={n,m};
    visit[1][1]++;
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    scanf("%1d",&map[j][i]);
    
    Push(start);
    while(1){
        dist tmp=Pop();
        if(tmp.x==end.x&&tmp.y==end.y){
            printf("%d",tmp.w);
            return 0;
        }
        Check(tmp);
    }
}