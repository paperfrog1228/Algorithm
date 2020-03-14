#include <stdio.h>
int n,c,t,time[2000006];
int main(){
	scanf("%d %d",&n,&c);
	for(int i=1;i<=c;i++)
		time[i]=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		int temp=t;
		while(temp<=c){
			time[temp]=1;
			temp+=t;
		}
	}
	t=0;	
	for(int i=1;i<=c;i++)
		if(time[i])
			t++;
	printf("%d",t);
}
