#include<stdio.h>
#include<algorithm>
int n,m[1004],ans;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) 
        scanf("%d",&m[i]);
    std::sort(m,m+n);
    for(int k=0;k<=m[n-1];k++){
        int i=0;
        while(m[i]<k) i++;
        if(i<=k&&n-i>=k)
          ans=k;
    }
    printf("%d",ans);
}
