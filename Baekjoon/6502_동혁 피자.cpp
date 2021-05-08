#include<bits/stdc++.h>
int i=1,r,w,l,a,b;
int main(){
    while(1){
		scanf("%d",&r);
		if(r==0) return 0;
		scanf("%d %d",&w,&l);
		a=w*w+l*l;
		b=r*2*r*2;
		if(a>b) printf("Pizza %d does not fit on the table.\n", i);
		else printf("Pizza %d fits on the table.\n", i);
        i++;
    }
}
