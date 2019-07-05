 #include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    bool check=true;
    int temp=-2;
   sort(A.begin(),A.end());
    for(vector<int>::iterator itr=A.begin();itr!=A.end();++itr)
    {
        
        if(temp==*itr)
        {
            check=true;
            temp=-1;
        }
        else
        {
            if(check)
            {
                if(A.end()==itr)
                return *itr;
                temp=*itr;
                check=false;
            }
           else return temp;
        }
    }
}