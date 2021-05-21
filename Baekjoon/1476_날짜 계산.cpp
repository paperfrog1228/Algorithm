#include<bits/stdc++.h>
#define MAXN 10010
using namespace std;
int e,s,m,ans=1;
int main(){
   scanf("%d %d %d",&e,&s,&m);
   while(1)
       if((ans-e)%15==0&&(ans-s)%28==0&&(ans-m)%19== 0){
            printf("%d",ans);
            return 0;
        }
        else ans++;
}
