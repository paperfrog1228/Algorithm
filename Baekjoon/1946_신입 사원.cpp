#include<stdio.h>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int a,b,max,second;
vector<pair<int,int>>::iterator itr;
bool compare_first(pair<int,int> a, pair<int,int> b){
return a.first<b.first;
}
void New_sa_one(int n){
  int ans=0;
  vector<pair<int,int>>list;
  for(int i =1;i<=n;i++)
  {
    scanf("%d %d",&a,&b);
    list.push_back(make_pair(a,b));
  }
  sort(list.begin(),list.end(),compare_first);
  second=(list.at(0)).second;
  for(itr=list.begin();itr<=list.end();++itr)
  {
    if((*itr).second<second)
    {
      ans++;
    second=(*itr).second;}
  }
  printf("%d\n",ans);
}

int main(){
  int t,n;
   
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    scanf("%d",&n);
    New_sa_one(n);
  }
	return 0;
}