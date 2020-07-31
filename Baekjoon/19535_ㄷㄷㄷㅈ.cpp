#include<stdio.h>
#include<vector>
struct Edge {int s;int e;};
std::vector<Edge> v;
int n,a,b,degree[300004];
long long cnt_d,cnt_j;
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        degree[a]++,degree[b]++;
        v.push_back({a,b});
    }
    for(int i=0;i<v.size();i++)
        if(degree[v[i].s]>1&&degree[v[i].e]>1)
            cnt_d+=(degree[v[i].s]-1)*(degree[v[i].e]-1);
    for(int i=1;i<=n;i++)
        if(degree[i]>=3)
            cnt_j+=((degree[i])*(degree[i]-1)*(degree[i]-2))/6;
    if(cnt_d>cnt_j*3)
        printf("D");
    else if(cnt_d<cnt_j*3)
        printf("G");
    else if(cnt_d==cnt_j*3)
        printf("DUDUDUNGA");
}