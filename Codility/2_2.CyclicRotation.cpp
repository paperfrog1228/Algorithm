#include <algorithm>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    if(A.begin()==A.end())
    return A;
for(int i=1;i<=K;i++)    
rotate(A.begin(),A.end()-1,A.end());
return A;
}