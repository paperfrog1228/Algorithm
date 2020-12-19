#include<iostream>
#include<queue>
std::queue<int> q1,q2;
int n,m,t,o;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){scanf("%d",&t);q1.push(t);}
    for(int i=1;i<=m;i++){scanf("%d",&t);q2.push(t);}
    while(!q1.empty()||!q2.empty()){
        if(q1.empty()) o=q2.front(),q2.pop();
        else if(q2.empty()) o=q1.front(),q1.pop();
        else q1.front()<q2.front()?(o=q1.front(),q1.pop()):(o=q2.front(),q2.pop());
        printf("%d ",o);
    }
}
