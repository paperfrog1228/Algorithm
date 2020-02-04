#include<stdio.h>
#include <algorithm>
#include<vector>
using namespace std;
vector<int> ans,temp;
int n,arr[103],tempNum;
bool visit[103];
bool DFS(int i){
    if(visit[i])
        return false;
    temp.push_back(arr[i]);
    visit[i]=true;
    if(arr[i]==tempNum)
        return true;
    return DFS(arr[i]);
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
  for(int i=1;i<=n;i++){
    for(int i=1;i<=n;i++)
    visit[i]=false;  
    tempNum=i;
    if(DFS(i)){
        ans.insert(ans.end(),temp.begin(),temp.end());
  }
    temp.clear();
  }
  sort(ans.begin(),ans.end());
  ans.erase(unique(ans.begin(),ans.end()),ans.end());
  printf("%ld\n",ans.size());
  for(vector<int>::iterator itr=ans.begin();itr!=ans.end();++itr)
  printf("%d\n",*itr);
}