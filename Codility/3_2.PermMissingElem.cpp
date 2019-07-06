using namespace std;
int solution(vector<int> &A) {
    int array[1000001]={0,};
    for(vector<int>::iterator itr = A.begin();itr!=A.end();++itr)
    {
        array[*itr]=2;
    }
    for(int i = 1; i<=100000;i++)
    {
        if(array[i]==0)
        return i;
    }
}