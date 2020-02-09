#include<stdio.h>
int main(){
    struct W{
        int x;
        int y;
    };
    int n,m,t,chess[1006][1006],x,y,q;
    W queen[102],
    dir[8]={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
    scanf("%d %d",&n,&m);
    scanf("%d",&q);
    for(int i=1;i<=q;i++){//queen
        scanf("%d %d",&x,&y);
        queen[i].x=x+1;
        queen[i].y=y+1;
        chess[queen[i].x][queen[i].y]=-1;
    }
    scanf("%d",&t);
    for(int i=1;i<=t;i++){//knight
        scanf("%d %d",&x,&y);
        chess[x+1][y+1]=-1;
        for(int j=0;j<=7;j++){
            if(chess[x+1+dir[j].x][y+1+dir[j].y]!=-1)
            chess[x+1+dir[j].x][y+1+dir[j].y]=3;
        }
    }
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&x,&y);
        chess[x+1][y+1]=-1;
    }
    for(int i=1;i<=q;i++){
        int j=queen[i].y-1;
        while(2<=j){//상        
            if(chess[queen[i].x][j]==-1)
                break;
            chess[queen[i].x][j]=2;
            j--;
        }
        j=queen[i].y+1;
        while(j<=m+1){//하      
            if(chess[queen[i].x][j]==-1)
                break;
            chess[queen[i].x][j]=2;
            j++;
        }
        j=queen[i].x-1;
        while(2<=j){//좌       
            if(chess[j][queen[i].y]==-1)
                break;
            chess[j][queen[i].y]=2;
            j--;
        }
        j=queen[i].x+1;
        while(j<=n+1){//우   
            if(chess[j][queen[i].y]==-1)
                break;
            chess[j][queen[i].y]=2;
            j++;
        }
        j=queen[i].x+1;
        int k=queen[i].y+1;
        while(j<=n+1&&k<=m+1){//오른쪽 아래 대각선      
            if(chess[j][k]==-1)
                break;
            chess[j][k]=2;
            j++;
            k++;
        }
        j=queen[i].x+1;
        k=queen[i].y-1;
        while(j<=n+1&&2<=k){//오른쪽 위 대각선      
            if(chess[j][k]==-1)
                break;
            chess[j][k]=2;
            j++;
            k--;
        }
        j=queen[i].x-1;
        k=queen[i].y-1;
        while(2<=j&&2<=k){//왼쪽 위 대각선      
            if(chess[j][k]==-1)
                break;
            chess[j][k]=2;
            j--;
            k--;
        }
        j=queen[i].x-1;
        k=queen[i].y+1;
        while(2<=j&&k<=m+1){//왼쪽 아래 대각선      
            if(chess[j][k]==-1)
                break;
            chess[j][k]=2;
            j--;
            k++;
        }
    }
    int ans=0;
    for(int i=2;i<=n+1;i++)
        for(int j=2;j<=m+1;j++)
        if(chess[i][j]==0){
        ans++;
        }
    printf("%d\n",ans);
}