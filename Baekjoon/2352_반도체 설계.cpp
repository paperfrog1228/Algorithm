#include <stdio.h>
#include <vector>
using namespace std;
vector<int> v,l;
int n,temp;
int main(){
    l.push_back(-1);
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    scanf("%d",&a),v.push_back(a);
    vector<int>::iterator itr;
        for(int i=0;i<v.size();i++){
            if(l.back()<v[i])
            l.push_back(v[i]);
        else
        itr=lower_bound(l.begin(),l.end(),v[i]),*itr=v[i];
    }
    printf("%d",l.size()-1);
}