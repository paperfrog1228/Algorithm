#include<stdio.h>
#include<vector>
using namespace std;
int main(){
int n,a[201];
vector<int> lis;
lis.push_back(-999);
scanf("%d",&n);
for(int i=1;i<=n;i++)
  scanf("%d",&a[i]);

vector<int>::iterator temp_itr;
for(int i=1;i<=n;i++)
{
  if(a[i]<lis.back())
  {
    temp_itr=lower_bound(lis.begin(),lis.end(),a[i]);
    *temp_itr=a[i];
  }
  else lis.push_back(a[i]);
}
printf("%d",n-lis.size()+1);
return 0;
}
