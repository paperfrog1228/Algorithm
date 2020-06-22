#include<stdio.h>
#include<vector>
using namespace std;
int n,a,b,ans[100004],visit[100004];
vector<int> t[100004];
void Check(int a){
    for(int i=0;i<t[a].size();i++){
        if(!visit[t[a][i]]){
            visit[t[a][i]]++;
            Check(t[a][i]);
        }
        ans[t[a][i]]=a;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        t[a].push_back(b);
        t[b].push_back(a);
    }
    Check(1);
    for(int i=2;i<=n;i++)
    printf("%d\n",ans[i]);
}