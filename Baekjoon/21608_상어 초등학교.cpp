#include<bits/stdc++.h>
using namespace std;
struct Pos{int r; int c;};
int n,nn,prefer[440][5],mp[22][22],ans;
Pos pos[440],dir[4]={{0,-1},{1,0},{0,1},{-1,0}};
int main(){
    scanf("%d",&n); nn=n*n;
    for(int now=1;now<=nn;now++){
        for(int j=0;j<5;j++) scanf("%d",&prefer[now][j]);
        int cnt[22][22];
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=4;i++){
            int bro=prefer[now][i];
            if(pos[bro].r==0) continue;
            for(int d=0;d<4;d++){
                int nr=pos[bro].r+dir[d].r;
                int nc=pos[bro].c+dir[d].c;
                if(nr<1||nc<1||nr>n||nc>n||mp[nr][nc]) continue;
                cnt[nr][nc]++;
            }
        }
        int mx=0,mxr=0,mxc=0,mx_empty=-1;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(mx>cnt[i][j]||mp[i][j]) continue;
            int empty=0;
            for(int d=0;d<4;d++){
                int nr=i+dir[d].r;
                int nc=j+dir[d].c;
                if(nr<1||nc<1||nr>n||nc>n||mp[nr][nc]) continue;
                empty++;
            }
            if(mx==cnt[i][j]&&mx_empty>empty) continue;
            mx=cnt[i][j],mxr=i,mxc=j,mx_empty=empty;
        }
        mp[mxr][mxc]=prefer[now][0];
        pos[prefer[now][0]]={mxr,mxc};
    }
    for(int i=1;i<=nn;i++){
        int cnt=0;
        Pos now=pos[prefer[i][0]];
        for(int d=0;d<4;d++){
            int nr=now.r+dir[d].r;
            int nc=now.c+dir[d].c;
            if(nr<1||nc<1||nr>n||nc>n) continue;
            for(int j=1;j<=4;j++){
                if(mp[nr][nc]==prefer[i][j]) {cnt++;break;}
            }
        }
        if(cnt>0) ans+=pow(10,cnt-1);
    }
    printf("%d",ans);
}
