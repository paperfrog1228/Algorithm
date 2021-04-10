#include<iostream>
#include<queue>
using namespace std;
int n,k,a,b,v[100004];
queue<int> q1,q2,q3;
struct p{int x;int y;};
int main(){
    scanf("%d %d",&n,&k);
    q1.push(n);
    while(!q1.empty()){
        while(!q1.empty()){
            int now=q1.front();q1.pop();
            if(now>100000||now<0||v[now]) continue;
            if(now==k) b++;
            q3.push(now);
            q2.push(now-1);
            q2.push(now+1);
            q2.push(now*2);
        }
        if(b){
            printf("%d\n%d",a,b);
            return 0;
        }
        while(!q3.empty()){
            v[q3.front()]++;
            q3.pop();
        }
        swap(q1,q2);
        a++;
    }
}
