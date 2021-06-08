#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v[5050];
int n,a,b,ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){scanf("%d %d",&a,&b);v[b].push_back(a);}
    for(int i=1;i<=5000;i++) sort(v[i].begin(),v[i].end());
    for(int i=1;i<=5000;i++){
        int size=v[i].size();
        if(size<2) continue;
        ans+=v[i][1]-v[i][0];
        for(int j=1;j<size-1;j++){
            int l=v[i][j]-v[i][j-1];
            int r=v[i][j+1]-v[i][j];
            ans+=min(l,r);
        }
        ans+=v[i][size-1]-v[i][size-2];
    }
    printf("%d",ans);
}
