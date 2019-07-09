#include <algorithm>

using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(),A.end());
   for(int i =1;i<=A.size();i++)
   {
       if(A[i-1]!=i)
       return 0;
   }
    return 1;
}