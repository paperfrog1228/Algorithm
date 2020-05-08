#include<stdio.h>
#include<algorithm>
using namespace std;
int c,n,r[104],k[104];
void TestCase(){
    int cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&r[i]);
    for(int i=1;i<=n;i++)
    scanf("%d",&k[i]);
    sort(k+1,k+n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(r[i]<=k[j]){
                cnt++;
                k[j]=-1;
                break;
            }
        }
    }
    printf("%d\n",cnt);
}
int main(){
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    TestCase();
}