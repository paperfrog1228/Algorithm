#include<iostream>
using namespace std;
int n,g[25][25],a[25][25],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&g[i][j]),a[i][j]=g[i][j];
    for(int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for(int j=1;j<=n;j++){
                if(i==k||k==j||i==j) continue;
                if(g[i][j]==g[i][k]+g[k][j]) a[i][j]=-1;
                if(g[i][j]>g[i][k]+g[k][j]){
                    printf("-1");
                    return 0;
                }
            }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]!=-1) ans+=a[i][j];
    printf("%d",ans/2);
}