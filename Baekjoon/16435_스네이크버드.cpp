#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int n,now;
int main(){
    scanf("%d %d",&n,&now);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) 
        if(v[i]<=now) now++;
        else break;
    printf("%d",now);
}
