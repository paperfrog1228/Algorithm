#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n,input,max=0;
  vector<int> line;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&input);
    line.push_back(input);
  }
  sort(line.begin(),line.end());
  for(vector<int>::iterator itr=line.begin();itr<=line.end();++itr)
  {
    if((*itr)*n>max)
    max=(*itr)*n;
    n--;
  }
  printf("%d",max);
	return 0;
}