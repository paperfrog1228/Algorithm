#include<stdio.h>
#define ll long long;
long long arr[1025][1025];
int main(){
int n,m,t;
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    scanf("%d",&t);
    arr[i+1][j+1]=t+arr[i+1][j]+arr[i][j+1]-arr[i][j];
}
for(int i=1;i<=m;i++){
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("%lld\n",arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1]);
}
}
