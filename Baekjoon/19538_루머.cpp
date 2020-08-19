#include<stdio.h>
#include<vector>
#include <queue>
using namespace std;
vector<int> l[200004];
queue<int> q,q2; 
int n,m,t,d[200004],truth[200004],a[200004],time;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    a[i]=-1;
    for(int i=1;i<=n;i++){
        while(1){
            scanf("%d",&t);
            if(t==0) break;
            l[i].push_back(t);
            d[i]++;
        }
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&t);
        q2.push(t);
        a[t]=0;
    }
    while(!q2.empty()){
        swap(q,q2);
             time++;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            for(int i=0;i<l[f].size();i++){      
                int item=l[f][i];
                truth[item]++;
                if(d[item]<=truth[item]*2&&a[item]==-1){
                    a[item]=time;
                    q2.push(item);
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    printf("%d ",a[i]);
}