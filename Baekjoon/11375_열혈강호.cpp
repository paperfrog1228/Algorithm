#include<stdio.h>
#define MAX 1000
int n,m,t,employee[MAX+2][MAX+2],
matching[MAX+1];//mathcing의 인덱스는 일의 번호, 값은 직원 번호.
int answer[MAX+1];
bool visit[MAX+1];//visit 인덱스 일의 번호.
bool Match(int i){
    int j=1;
    while(employee[i][j]!=0){
        int workNum=employee[i][j];
        if(matching[workNum]==0){
        matching[workNum]=i;
        answer[i]=workNum;
        return true;
        }
        int employeeNum=matching[workNum];
        if(!visit[workNum]){
            visit[workNum]=true;
            if(Match(employeeNum)){
            matching[workNum]=i;
            answer[i]=workNum;
            for(int a=1;a<=m;a++)
            visit[a]=false;
            return true;
            }
        }
        j++;
    }
    return false;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        for(int j=1;j<=t;j++)
        scanf("%d",&employee[i][j]);
    }
    for(int i=1;i<=n;i++)
    Match(i);
    int ans=n;
    for(int i=1;i<=n;i++){
    if(answer[i]==0)
    ans--;
    }
    printf("%d",ans);
}