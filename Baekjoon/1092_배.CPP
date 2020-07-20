#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,w[55],k[10004],time;
int Search(int n,int l,int r){
    int mid,ret=-1;
    while(l<=r){
        mid=(l+r)/2;
        if(w[n]>=k[mid]){
            ret=mid;
            l=mid+1;
        }
        else
        r=mid-1;
    }
    if(ret!=-1){
        k[ret]=9999999;
        sort(k+1,k+m+1);
        m--;
    }
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&w[i]);
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
        scanf("%d",&k[i]);
    sort(w+1,w+n+1);
    sort(k+1,k+m+1);
    while(1){
         if(m==0)
                goto ANS;
        time++;
        for(int i=n;i>=1;i--){
            if(m==0)
                goto ANS;
            if(Search(i,1,m)==-1&&i==n){
                printf("-1");
                return 0;
            }
           
        }
    }
    ANS:
    printf("%d",time);
} 