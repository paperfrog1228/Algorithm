#include<stdio.h>
char arr[110][110];
int dx[8]={-1,0,1,1,1,0,-1,-1},dy[8]={1,1,1,0,-1,-1,-1,0},ans=0;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",arr[i]);
    bool flag=false;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        flag=true;
        if(arr[i][j]=='#'){
            for(int k=0;k<8;k++)
                if(arr[i+dx[k]][j+dy[k]]=='0'){
                    flag=false;
                    break;
                }
            if(flag){
                ans++;
                for(int k=0;k<8;k++)
                    if(arr[i+dx[k]][j+dy[k]]>'0')
                        arr[i+dx[k]][j+dy[k]]--;
            }
        }
    }
   printf("%d\n",ans);
}