#include <iostream>
#include<queue>
struct state{int cur;int cnt;};
std::queue<state> q;
int f,s,g,u,d,visit[1000005];
int main() {
    scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);
    q.push({s,0});
    while(!q.empty()){
        state ss=q.front();
        q.pop();
        if(ss.cur>f||ss.cur<1||visit[ss.cur])
            continue;
        visit[ss.cur]++;
        if(ss.cur==g){
            printf("%d",ss.cnt);
            return 0;
        }
        q.push({ss.cur+u,ss.cnt+1});
        q.push({ss.cur-d,ss.cnt+1});
    }
    printf("use the stairs");
}