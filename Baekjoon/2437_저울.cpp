#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,sum=1;
int main(){
    scanf("%d",&n);
    vector<int> v(n);
    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]>sum) {break;}
        sum+=v[i];
    }
    printf("%d",sum);
}