#include<stdio.h>
#include<algorithm>
using namespace std;
int n,mx,mxi,t,a[5];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp=0;
        for(int j=0;j<5;j++) scanf("%d",&a[j]);
        for(int k=0;k<5;k++)
        for(int l=k+1;l<5;l++)
        for(int m=l+1;m<5;m++) tmp=max((a[k]+a[l]+a[m])%10,tmp); 
        if(tmp>=mx) mx=tmp,mxi=i;
    }
    printf("%d",mxi);
}