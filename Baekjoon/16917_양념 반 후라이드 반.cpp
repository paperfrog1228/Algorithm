#include<stdio.h>
int main(){
int a,b,c,x,y,z;//�Ķ��̵�,���,�ݹ� ����//�Ķ��̵��� ����
long long min,temp=0;
scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
min=x*a+y*b;
if(x>y){
	temp=(x-y)*a+2*y*c;
	if(min>temp)
		min=temp;
}
else {
	temp=(y-x)*b+2*x*c;
	if(min>temp)
		min=temp;
}
c=2*c;
if(x>y){
	temp=x*c;
	if(min>temp)
		min=temp;
}
else {
	temp=y*c;
	if(min>temp)
		min=temp;
}


printf("%lld",min);
return 0;


}
