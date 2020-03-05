#include<stdio.h>
int n,ans=0,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
char candy[52][52];
void Check(){
    for(int x=0;x<n;x++){
        int cnt=1;
        char same=candy[x][0];
        for(int y=1;y<n;y++){
            if(candy[x][y]!=same){
                if(ans<cnt)
                    ans=cnt;
                cnt=1;
                same=candy[x][y];
                continue;
            }
            cnt++;
        }
        if(ans<cnt)
        ans=cnt;
    }
    for(int y=0;y<n;y++){
        int cnt=1;
        char same=candy[0][y];
        for(int x=1;x<n;x++){
            if(candy[x][y]!=same){
                if(ans<cnt)
                    ans=cnt;
                cnt=1;
                same=candy[x][y];
                continue;
            }
            cnt++;
        }
        if(ans<cnt)
        ans=cnt;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%s",candy[i]);
    Check();
   
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        char temp=candy[i][j];
        for(int k=0;k<4;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(nx<0||ny<0||n<nx||n<ny||candy[i][j]==candy[nx][ny])
                continue;
            candy[i][j]=candy[nx][ny];
            candy[nx][ny]=temp;
            Check();
            temp=candy[nx][ny];
            candy[nx][ny]=candy[i][j];
            candy[i][j]=temp;
        }
    }
    printf("%d",ans);
}