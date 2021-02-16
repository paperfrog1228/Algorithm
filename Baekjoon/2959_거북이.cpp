#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v(4);
int main(){
    scanf("%d %d %d %d",&v[0],&v[1],&v[2],&v[3]);
    sort(v.begin(),v.end());
    printf("%d",v[0]*v[2]);
}
