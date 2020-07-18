#include<stdio.h>
int n,m,a[1000004],b,cnt;
bool Search(int l,int r,int b){
    while(l<=r){
        int m=(l+r)/2;
        if(b==a[m])
        return true;
        if(b<a[m])
        r=m-1;
        else
        l=m+1;
    }
    return false;
}
void Testcase(int n,int m){
    cnt=0;
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        scanf("%d",&b);
        if(Search(1,n,b))
        cnt++;
    }
    printf("%d\n",cnt);
}
int main(){
    while(1){
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)
        return 0;
    Testcase(n,m);
    }
}