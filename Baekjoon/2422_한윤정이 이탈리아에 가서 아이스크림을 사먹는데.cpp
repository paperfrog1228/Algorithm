#include <stdio.h>
int n,m,ice[204][204],a,b,cnt=0;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        ice[a][b]=1;
        ice[b][a]=1;
    }
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++){
            if(ice[i][j])
                continue;
            for(int k=j+1;k<=n;k++){
                if(ice[j][k]||ice[i][k])
                    continue;
                    cnt++;
            }
        }
    printf("%d",cnt);
}