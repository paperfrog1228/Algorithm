#include<stdio.h>
#include<vector>
struct ans{int x;int y;};
std::vector<ans> v;
int n,a;
void Rec(int cnt,int x,int y,int z){
    if(cnt==1)
        v.push_back({x,y});
    else{
        Rec(cnt-1,x,z,y);
        v.push_back({x,y});
        Rec(cnt-1,z,y,x);
    }
    a++;
}
int main(){
    scanf("%d",&n);
    Rec(n,1,3,2);
    printf("%d\n",a);
    for(auto i:v)
    printf("%d %d\n",i.x,i.y);
}