#include<stdio.h>
struct P{int x;int y;};
P p[55];
int n;
int main(){
scanf("%d",&n);
for(int i=1;i<=n;i++)    
scanf("%d %d",&p[i].x,&p[i].y);
for(int i=1;i<=n;i++){
	int cnt=0;
	for(int j=1;j<=n;j++)
if(p[j].x>p[i].x&&p[j].y>p[i].y&&i!=j)
cnt++;
printf("%d ",cnt+1);
}
}
