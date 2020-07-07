#include <vector>
using namespace std;
long long sum(vector<int> &a){
    long long r=0;
    for(int i=0;i<a.size();i++)
    r+=a[i];
    return r;
}