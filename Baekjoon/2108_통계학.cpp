#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
int n,t,all,a,b,c,d,cnt[8004];
std::vector<int> v;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        v.push_back(t);
        all+=t;
        cnt[t+4000]++;
    }
    sort(v.begin(),v.end());
    a=floor((double)all/(double)n+0.5);
    b=v[n/2];
    int many=0,c=0;
    bool flag=false;
    for(int i=0;i<=8000;i++){
        if(cnt[i]>many)
            many=cnt[i],c=i,flag=true;
        else if(cnt[i]==many&&flag)
           many=cnt[i],c=i,flag=false;
    }
    c-=4000;
    d=v[v.size()-1]-v[0];
    printf("%d\n%d\n%d\n%d",a,b,c,d);
}