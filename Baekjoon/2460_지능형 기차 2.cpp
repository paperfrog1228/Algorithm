#include<stdio.h>
int t,cnt,max;
int main(){
for(int i=1;i<=10;i++){
	scanf("%d",&t);
	cnt-=t;
	scanf("%d",&t);
	cnt+=t;
	if(cnt>max)
	max=cnt;
}    
printf("%d",max);
}