#include<stdio.h>
#include<vector>
#include<queue>
#define INF 987654321
using namespace std;
int n,m,k,s,t,b,res[2004][2004];
vector<int> adj[2004];
int level[2004]; 
int work[2004]; // dfs 중, 이 정점이 몇 번째 간선까지 탐색했는지 기억하는 용도
bool bfs(){
    fill(level, level+n+m+5, -1);
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int curr = q.front(); 
        q.pop();
        for(int next: adj[curr]){
            // 레벨값이 설정되지 않았고, 간선에 residual이 있을 때만 이동
            if(level[next] == -1 && res[curr][next] > 0){
                level[next] = level[curr] + 1; // next의 레벨은 curr의 레벨 + 1
                q.push(next);
            }
        }
    }
    // 싱크에 도달 가능하면 true, 아니면 false를 리턴
    return level[t] != -1;
}
int dfs(int curr, int dest, int flow){
    // base case: dest에 도달함
    if(curr == dest) return flow;
    // 현재 정점에서 인접한 정점들을 탐색
    // 이때, 이번 단계에서 이미 쓸모없다고 판단한 간선은 다시 볼 필요가 없으므로
    // work 배열로 간선 인덱스를 저장해 둠
    for(int &i=work[curr]; i<adj[curr].size(); i++){
        int next = adj[curr][i];
        // next의 레벨이 curr의 레벨 + 1이고, 간선에 residual이 남아있어야만 이동
        if(level[next] == level[curr]+1 && res[curr][next] > 0){
            // df: flow와 다음 dfs함수의 결과 중 최소값
            // 결과적으로 경로상의 간선들 중 가장 작은 residual이 됨
            int df = dfs(next, dest, min(res[curr][next], flow));
            // 증가 경로가 있다면, 유량을 df만큼 흘리고 종료
            if(df > 0){
                res[curr][next] -= df;
                res[next][curr] += df;
                return df;
            }
        }
    }
    // 증가 경로를 찾지 못함: 유량 0 흘림
    return 0;
}
void add_edge(int a,int b,int r){
    res[a][b]=r;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    s=0,t=n+m+1,b=n+m+2;
    add_edge(s,b,k);// b->bridge. k개 만큼 일 더 시킴.
    int w,wn;
    for(int i=1;i<=n;i++){
        scanf("%d",&w);
        for(int j=1;j<=w;j++)
            scanf("%d",&wn),add_edge(i,wn+n,1);
        add_edge(s,i,1);
        add_edge(b,i,k); //최대 유량 문제라 k개 흘려도 알아서 흐름.
    }
    for(int i=1;i<=m;i++)
        add_edge(i+n,t,1);
    int total = 0;
    // 레벨 그래프를 구축하여 싱크가 도달 가능한 동안 반복
    while(bfs()){
        fill(work, work+n+m+5, 0);
        // 차단 유량(blocking flow) 구하기
        while(1){
            int flow = dfs(s, t, INF); // dfs를 사용해 각 경로를 찾음
            if(flow == 0) break; // 더 이상 경로가 없으면 종료
            total += flow; // 총 유량에 이번에 구한 유량 더함
        }
    }
    printf("%d",total);
}
//blog.naver.com/kks227/220812858041 라이님 블로그 참조해서 변형