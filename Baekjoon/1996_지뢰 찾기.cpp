#include<bits/stdc++.h>
int n,ans[1010][1010];
char s[1010][1010];
int dx[8]={0,0,1,-1,1,-1,1,-1};
int dy[8]={1,-1,0,0,1,-1,-1,1};;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%s",s[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        if(s[i][j]!='.')   ans[i][j]=-1;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        if(s[i][j]=='.') continue;
         for(int k=0;k<8;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(nx<0||ny<0||nx>=n||ny>=n) continue;
            if(ans[nx][ny]<0) continue;
            ans[nx][ny]+=(s[i][j]-'0');
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(ans[i][j]<0)
            printf("*");
        else if(ans[i][j]>9)
            printf("M");
        else printf("%d",ans[i][j]);
    }
        printf("\n");
    }
}
