#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int n,a,b,ans;
vector<pair<int,int>> v;
priority_queue<int> pq;
int main(){
        scanf("%d",&n);
        v.resize(n);
        for(int i=0;i<n;i++){
                scanf("%d %d",&v[i].first,&v[i].second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<=n;i++){
                if(pq.size()<v[i].first)
                pq.push(-v[i].second);
                else if(-pq.top()<v[i].second){
                        pq.pop();
                        pq.push(-v[i].second);
                }
        }
        while (!pq.empty()){
                ans+=pq.top();
                pq.pop();
        }
        printf("%d",-ans);
}