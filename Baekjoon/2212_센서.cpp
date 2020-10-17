#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
int n,k,all;
std::vector<int> v,d;
int main(){
    scanf("%d %d",&n,&k);
    int a;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    all=abs(*(v.end()-1)-*v.begin());
    for(int i=0;i<v.size()-1;i++)
    d.push_back(abs(v[i+1]-v[i]));
    sort(d.begin(),d.end(),std::greater<int>());
    for(int i=0;i<k-1;i++){
        if(i>=d.size()) break;
        all-=d[i];
    }
    printf("%d",all);
}