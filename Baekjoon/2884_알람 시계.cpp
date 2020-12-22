#include<iostream>
int h,m;
int main(){
   scanf("%d %d",&h,&m);
   m+=15;
   if(m/60<1) h--;
   m%=60; 
   if(h==-1) h=23;
   printf("%d %d",h,m);
}
