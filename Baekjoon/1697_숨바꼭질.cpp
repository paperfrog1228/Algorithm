#include<stdio.h>
#include <queue>
#define MAX 100000
using namespace std;
int n,k,count=0;
bool visit[MAX+1],ans_flag=false;
queue<int> q2;
void Check(int a){
    if(MAX<a||a<0)
        return;
    if(visit[a])
    return;
    visit[a]=true;
    if(a==k)
    ans_flag=true;
    else
    q2.push(a);
        
}
void BFS(){
    while(!q2.empty()){
        queue<int> q;
        swap(q,q2);
    while(!q.empty()){
    int x=q.front();
    q.pop();
    Check(x-1);
    Check(x+1);
    Check(x*2);
    if(ans_flag){
    count++;
    return;
    }
    }
    count++;
    }
}

int main(){
    scanf("%d %d",&n,&k);
    Check(n);
    BFS();  
    printf("%d",count);
    return 0;
}
