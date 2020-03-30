#include <stdio.h>
int main(){
    int n;
    long long arr[1100],cluster,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&arr[i]);
    scanf("%lld",&cluster);  
    for(int i=1;i<=n;i++){
        if(arr[i]==0)
        continue;
        if(arr[i]<cluster)
        count++;
        else{
            count+=(arr[i]/cluster)+1;
            if(arr[i]%cluster==0)
                count--;
        }
    }
    printf("%lld\n",cluster*count);
}