#include<stdio.h>
#include<queue>
#include<string>
using namespace std;
int n,m,a,b[10],visit[1000010];
struct click{int num;int cnt;};
queue<click> q1,q2;
string nn;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d",&a),b[a]++;
    q1.push({100,0});
    while(!q1.empty()){
        while (!q1.empty()){
            click now=q1.front(); q1.pop();
            if(visit[now.num]||now.num<0||now.num>1000000) continue;
            visit[now.num]++;
            if(now.num==n){printf("%d",min(abs(100-now.num),now.cnt)); return 0;}
            q2.push({now.num+1,now.cnt+1});
            q2.push({now.num-1,now.cnt+1});
            if(now.cnt==0){
                for(int i=0;i<=1000000;i++){
                    string ii=to_string(i);
                    bool enable=true;
                    for(int j=0;j<ii.size();j++){
                        if(b[ii[j]-'0']==1)enable=false;
                    }
                    if(enable) q2.push({i,now.cnt+(int)ii.size()});
                }
            }
        }
        swap(q1,q2);
    }
}
