#include <stdio.h>
#include <vector>
#include<algorithm>
using namespace std;
int n,ans;
vector<int> ansv;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int f=n,s=i,tmp=0;
        vector<int> tmpv={n,i};
        while(f-s>=0) tmpv.push_back(f-s),tmp=f,f=s,s=tmp-f;
        if(ans<tmpv.size())
            ans=tmpv.size(),ansv=tmpv;
    }
    printf("%d\n",ans);for(int i=0;i<ans;i++)printf("%d ",ansv[i]);
}
