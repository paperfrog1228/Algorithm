#include<iostream>
#include<algorithm>
#include<vector>
std::vector<double> v;
int n;
double d;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&d);
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<7;i++) printf("%.3lf\n",v[i]);
}