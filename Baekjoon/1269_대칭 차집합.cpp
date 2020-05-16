#include<stdio.h>
#include<algorithm>
using namespace std;
int a[200004],n,m,overlap;
void Search(int t,int left,int right){
    if(left>right)
        return;
    int mid=(left+right)/2;
    if(a[mid]==t){
        overlap++;
        return;
    }
    if(t<a[mid])
    Search(t, left, mid-1);
    else
    Search(t, mid+1, right);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for(int i=1;i<=m;i++){
        int tmp;
        scanf("%d",&tmp);
        Search(tmp,1,n);
    }
    printf("%d",n+m-2*overlap);
}