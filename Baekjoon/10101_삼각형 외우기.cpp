#include <stdio.h>
int a,b,c;
int main(){
    scanf("%d %d %d",&a,&b,&c);
	if(a+b+c!=180){
		printf("Error");
		return 0;
	}
    if(a==60&&b==60&&c==60){
		printf("Equilateral");
		return 0;
	}
	if(a==b||b==c||a==c){
	   printf("Isosceles");
		return 0;
	}
	printf("Scalene");
	
    return 0;

}