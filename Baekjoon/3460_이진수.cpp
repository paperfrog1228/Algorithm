#include<stdio.h>
#include<vector>
using namespace std;
int t,n;
void Test(){
    vector<int> ans;
    scanf("%d",&n);
    int i=0;
    while(n!=0){
        if(n%2==1)
        ans.push_back(i);
        i++;
        n/=2;
    }
    vector<int>::iterator itr;
    for(itr=ans.begin();itr!=ans.end()-1;itr++)
        printf("%d ",*itr);
    printf("%d\n",*itr);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Test();
}