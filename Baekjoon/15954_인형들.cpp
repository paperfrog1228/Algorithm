#include<stdio.h>
#include<assert.h>
#include<math.h>
#include<vector>
#define ld long double
using namespace std;
int n,k;
long long a[550],sum[550],sqsum[550];
ld ans=999999999999999999;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    sum[i]=sum[i-1]+a[i];
    sqsum[i]=sqsum[i-1]+a[i]*a[i];
    }
    vector<int> dolls={};
    for(int i=1;i<=n;i++)
    for(int j=i;j<=n;j++){
        if(j-i+1<k)
        continue;
        ld s=sum[j]-sum[i-1],nn=j-i+1,avg=s/nn;
        ld tmp=((ld)(sqsum[j]-sqsum[i-1])-2*avg*s+nn*avg*avg)/nn;
        if(ans>sqrt(tmp))
        ans=sqrt(tmp);
    }
    printf("%.11Lf",ans);
}