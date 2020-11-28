#include <stdio.h>
int n,m,a[55][55],b[55][55],ans;
bool c[55][55];
void flip(int x,int y){
    for(int i=x;i>=x-2;i--)
    for(int j=y;j>=y-2;j--)
        a[i][j]^=1,c[i][j]^=1;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%1d",&a[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf("%1d",&b[i][j]);
        if(a[i][j]==b[i][j])
            c[i][j]=1;
        else c[i][j]=0;
    }
    for(int i=n;i>=3;i--)
    for(int j=m;j>=3;j--)
        if(!c[i][j])
        flip(i,j),ans++;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        if(a[i][j]!=b[i][j]){
            printf("-1");
            return 0;
        }
    printf("%d",ans);
}