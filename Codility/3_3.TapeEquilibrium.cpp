 #include <math.h>
using namespace std;
int solution(vector<int> &A) {
long sum=0;
int temp=0;
int small=2147483647;
for(vector<int>::iterator itr=A.begin();itr!=A.end();++itr )
{
    sum+=*itr;
}
for(vector<int>::iterator itr=A.begin();itr!=A.end();itr++ )
{
    temp+=*itr;
    sum-=*itr;

    if(small>abs(temp-sum))
    small=abs(temp-sum);
    if(small==0)
    return 0;
}
return small;
}
