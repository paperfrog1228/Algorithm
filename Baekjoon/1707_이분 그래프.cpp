#include <stdio.h>
#include <vector>
using namespace std;
vector<int> graph[20002];
int v,e,color[20002];
void DFS(int x,int paint){
    color[x]=paint;
    int target_color;
    paint==1?target_color=2:target_color=1;
    for(int i=0;i<graph[x].size();i++){
        if(color[graph[x][i]]==0){
            DFS(graph[x][i],target_color);
        }
    }
}
void TestCase(){
    scanf("%d %d",&v,&e);
    for(int i=0;i<=v;i++){
        color[i]=0;
        graph[i].clear();
    }
    int a,b;
    for(int i=1;i<=e;i++){
        scanf("%d %d",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=v;i++){
        if(color[i]==0)
            DFS(i,1);
    }
    bool flag1=false,flag2=false;
    for(int i=1;i<=v;i++){
        int my_color=color[i];
        if(my_color==1)
        flag1=true;
        if(my_color==2)
        flag2=true;
        if(my_color==0&&flag1&&flag2){
            printf("NO\n");
            return;
        }
        for(int j=0;j<graph[i].size();j++)
            if(my_color==color[graph[i][j]]){
                printf("NO\n");
                return;
            }
    }
    printf("YES\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        TestCase();
        t--;
    }
    return 0;
}