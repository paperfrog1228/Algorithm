#include<stdio.h>
#define MAX 1000
#define FOR(i,n) for(int i=1;i<=n;i++)
int arr[MAX+2][MAX+2],ans[MAX+2];
int main(){
    int n;
    if(n==2){ //n이 2인 유일한 수열은 아마 이것뿐
        printf("1 1");
        return 0;
    }
    scanf("%d",&n);
    FOR(i,n)FOR(j,n)scanf("%d",&arr[i][j]);
    
    ans[1]=arr[1][2]+arr[1][3]-arr[2][3];
    ans[1]/=2;
    for(int i=2;i<=n;i++)
    ans[i]=arr[1][i]-ans[1];
    FOR(i,n)
    printf("%d ",ans[i]);
}