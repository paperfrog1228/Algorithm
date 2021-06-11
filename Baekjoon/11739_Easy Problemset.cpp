#include<bits/stdc++.h>
int n,k,x,hardness[20][20],ans,cnt;
int main(){
    memset(hardness,-1,sizeof(hardness));
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        for(int j=1;j<=x;j++) scanf("%d",&hardness[i][j]);
    }
    int j=1;
    while(1){
        for(int i=1;i<=n;i++) {
            if(hardness[i][j]==-1) ans+=50,cnt++;
            else if(ans<=hardness[i][j]) ans+=hardness[i][j],cnt++;
            if(cnt==k) {printf("%d",ans); return 0;}
        }
        j++;
    }
}
