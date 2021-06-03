#include <stdio.h>
#include <algorithm>
#include <vector>
int t;
void sol(){
    std::vector<int> v(5);
    for(int i=0;i<5;i++) scanf("%d",&v[i]);
    std::sort(v.begin(),v.end());
    if(v[3]-v[1]>=4) printf("KIN\n");
    else printf("%d\n",v[1]+v[2]+v[3]);
}
int main(){
    scanf("%d",&t);
    while(t--) sol();
}
