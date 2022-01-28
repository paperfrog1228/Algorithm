#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,mx,mxi,a;
vector<int> p;
int main() { 
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        p.push_back(a);
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    for(int i=0;i<m&&i<n;i++)
            if(p[i]*(i+1)>mx)
                mx=p[i]*(i+1),mxi=i;
    printf("%d %d", p[mxi],mx);
}