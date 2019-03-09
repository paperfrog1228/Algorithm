#include<stdio.h>
#define max 1000000001
long x,y,z;
void search(long left,long right){
if(left>right)
{printf("%lld",left);
return ;}
long mid=(left+right)/2;
long ans=(long)((y+mid)*100/(x+mid));
if(ans==z) search(mid+1,right); //변경 안됬으니깐 더 조져야함
else (search(left,mid-1)); //변경 됬으면 최소값 찾아야함
}
int main(){
scanf("%lld %lld",&x,&y);
z=(long)(y*100/x);
if(z>=99)
	{printf("-1");
		return 0;}
search(0,max);
return 0;
}

