#include<stdio.h>
int t,n,b,p[200005],a[200005];
void testcase(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&b),p[i]=b,a[b]++;
  int ans=200006,val=200006;
  for(int i=1;i<=n;i++)
    if(a[p[i]]==1&&p[i]<val)
      ans=i,val=p[i];
  if(ans==200006)
    ans=-1;
  printf("%d\n",ans);
  for(int i=1;i<=n;i++)
    a[i]=0;
}
int main(){
  scanf("%d",&t);
  while(t>0){
    testcase();
    t--;
  }
}