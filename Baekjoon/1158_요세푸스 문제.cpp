#include<stdio.h>
int arr[5003],n,k,ans[5003];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        arr[i]=1;

    int i=1,j=0,temp=1;
    while(temp<=n){
        if(arr[i]==1)
            j++;
        if(j==k){
            j=0;
            arr[i]=0;
            ans[temp]=i;
            temp++;
        }
        i++;
        if(i>n)
            i=1;
    }
    printf("<");
    for(int i=1;i<=n;i++){
        if(i==n)
        printf("%d",ans[i]);
        else
        printf("%d, ",ans[i]);
    }
    printf(">");
}