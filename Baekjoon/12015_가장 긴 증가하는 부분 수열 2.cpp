#include<stdio.h>
#include<vector>
using namespace std;
int main(){
 int n,temp;
 vector<int> a,lis;
 lis.push_back(-9999);
 scanf("%d",&n);
 for(int i =1;i<=n;i++){
   scanf("%d",&temp);
   a.push_back(temp);
 }
vector<int>::iterator itr,temp_itr;
for(itr=a.begin();itr<=a.end();itr++)
{
  if(lis.back()<*itr)
  lis.push_back(*itr);
  else
  {temp_itr=lower_bound(lis.begin(),lis.end(),*itr);
  *temp_itr=*itr;}
}
printf("%lu",lis.size()-1);
return 0;
}