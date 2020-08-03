#include<stdio.h>
#include<algorithm>
using namespace std;
int n,c,a[200004],ans;
int Check(int dist){
    int temp=a[1],cnt=1;
    for(int i=2;i<=n;i++)
        if(temp+dist<=a[i]){
            cnt++;
            temp=a[i];
        }
    return cnt;
}
void Search(int left,int right){
    ans=(left+right)/2;
    while(left<=right){
        int mid=(left+right)/2;
        int check=Check(mid);
        if(check<c)
            right=mid-1;
        else{
            ans=mid;
            left=mid+1;
        }
    }
}
int main(){
    scanf("%d %d",&n,&c);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    Search(1, a[n]-a[1]);
    printf("%d",ans);
}