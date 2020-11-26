#include<stdio.h>
int t,n;
void testcase(){
  scanf("%d",&n);
  for(int i=1;i<=n-1;i++)
  printf("%d ",i+1);
  printf("1\n");
}
int main(){
  scanf("%d",&t);
  while(t>0){
    testcase();
    t--;
  }
}