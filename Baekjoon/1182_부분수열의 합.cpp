#include<stdio.h>
int n,s,arr[25],cnt,visit[22];
void DFS(int i,int sum){
    if(visit[i])
        return;
    visit[i]++;
    sum+=arr[i];
    if(sum==s)
        cnt++;
    for(int j=i;j<=n;j++)
        DFS(j,sum);
    visit[i]=0;    
}
int main(){
    scanf("%d %d",&n,&s);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++)
        DFS(i,0);
    printf("%d",cnt);
}
//이건 다른 사람 코드.
#include <stdio.h>
int n,s,cnt,a[30];

void find(int i,int sum){
    if(sum+a[i]==s) cnt++;
    if(i==n-1) return;
    find(i+1,sum); find(i+1,sum+a[i]);
}

int main(){
	scanf("%d %d",&n,&s);
    for(int i=0; i<n; i++){
    	scanf("%d",&a[i]);
    }
    find(0,0);
	printf("%d",cnt);
}
