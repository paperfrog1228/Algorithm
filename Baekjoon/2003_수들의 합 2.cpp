#include<stdio.h>
int n,m,a[10005],s=1,e=1,sum,cnt;
int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    sum=a[1];
    while(e<=n){
        if(sum<=m||s>=e){
            if(sum==m)
                cnt++;
            e++;
            sum+=a[e];
        }
        else{
            sum-=a[s];
            s++;
        }
    }
    printf("%d",cnt);
}