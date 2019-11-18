#include<stdio.h>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> a, pair<int,int> b){
  if(a.second==b.second)
  return a.first<b.first;
return a.second<b.second;
}
int main() {
  vector<pair<int,int>> times;
  pair<int,int> temp=make_pair(-1, -1);
	int n,open,close,ans=0;
  vector<pair<int,int>>::iterator itr;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {	
    scanf("%d %d",&open,&close);
    times.push_back(make_pair(open,close));
  }
 sort(times.begin(),times.end(),compare);
  for(itr= times.begin();itr!=times.end();++itr)
  {
    if((*itr).first>=temp.second)
    {
      temp=*itr;
      ans++;
    }
  }
  printf("%d",ans);
	return 0;
}