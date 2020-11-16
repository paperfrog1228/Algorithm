#include <stdio.h>
int r,c,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},r1,r2,c1,c2;
char s[12][12],a[12][12];
int main() {
    r1=r2=c1=c2=-1;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    scanf("%s",s[i]);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
        a[i][j]=s[i][j];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        if(s[i][j]=='.')
            continue;
        int nx,ny,cnt=0;
        for(int k=0;k<4;k++){
            nx=i+dx[k],ny=j+dy[k];
            if(nx<0||ny<0||nx>=r||ny>=c)
                cnt++;
            else if(s[nx][ny]=='.')
                cnt++;
        }
        if(cnt>=3) a[i][j]='.';
    }
    for(int i=0;i<c;i++)
    for(int j=0;j<r;j++){
        if(a[j][i]=='X'&&c1==-1)c1=i;
        if(a[j][i]=='X'&&c1!=-1)c2=i;
    }
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        if(a[i][j]=='X'&&r1==-1)r1=i;
        if(a[i][j]=='X'&&r1!=-1)r2=i;
    }
    for(int i=r1;i<=r2;i++){
    for(int j=c1;j<=c2;j++)
    printf("%c",a[i][j]);
    printf("\n");
    }
}