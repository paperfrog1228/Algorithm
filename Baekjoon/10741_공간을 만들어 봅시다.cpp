#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int w,p;
int main(){
    scanf("%d %d",&w,&p);
    vector<int> v(p),ans;
    for(int i=0;i<p;i++) scanf("%d",&v[i]),ans.push_back(v[i]);
    v.push_back(w),ans.push_back(w);
    sort(v.begin(),v.end());
    for(int i=0;i<=p;i++){
        for(int j=i+1;j<=p;j++){
            ans.push_back(v[j]-v[i]);

        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
}