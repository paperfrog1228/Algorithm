#include<stdio.h>
#include<vector>
using namespace std;
int n,m,who_work[1004]={0,},visit[1004];
vector<vector<int>> employee;
bool DFS(int man){
    for(int i=0;i<employee[man].size();i++){
        int num=employee[man][i];
        if(visit[num])
            continue;
        visit[num]=1;
        if(who_work[num]==0||DFS(who_work[num])){
            who_work[num]=man;
            return true;
        }
    }
    return false;
}
int main(){
    int task,task_num,count=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n;i++){
        vector<int> a;
        employee.push_back(a);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&task);
        for(int j=0;j<task;j++){
            scanf("%d",&task_num);
            employee[i].push_back(task_num);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            visit[j]=0;
        if(DFS(i)) 
        count++;
    }
    for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++)
            visit[j]=0;
        if(DFS(i)) 
        count++;
    }
    printf("%d\n",count);
    return 0;
}