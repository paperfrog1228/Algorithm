#include<stdio.h>
#include<vector>
using namespace std;
int n;
int main(){
    scanf("%d",&n);
    while(n--){
       vector<int> v(10);
       for(int i=0;i<10;i++) scanf("%d",&v[i]);
       sort(v.begin(),v.end());
       printf("sex : %d\n",v[7]);
    }
}