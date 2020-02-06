#include<stdio.h>
int main(){
    int n,arr[103][103],sum,check[10003];
    scanf("%d",&n);
    sum=n*(n*n+1)/2;
    for(int i=1;i<=n*n+2;i++)
        check[i]=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
    scanf("%d",&arr[i][j]);
    check[arr[i][j]]++;
    }
    for(int i=1;i<=n*n+2;i++)
    if(check[i]>2){
        printf("FALSE\n");
        return 0;
    }
    int temp=0; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            temp+=arr[i][j];
        if(temp!=sum){
            printf("FALSE\n");
            return 0;
        }
        temp=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            temp+=arr[j][i];
        if(temp!=sum){
            printf("FALSE\n");
            return 0;
        }
        temp=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            temp+=arr[i][j];
        if(temp!=sum){
            printf("FALSE\n");
            return 0;
        }
        temp=0;
    }
    for(int i=1;i<=n;i++)
    temp+=arr[i][i];
    if(temp!=sum){
        printf("FALSE\n");
        return 0;
    }
    temp=0;
    for(int i=1;i<=n;i++)
    temp+=arr[i][n+1-i];
    if(temp!=sum){
        printf("FALSE\n");
        return 0;
    }
    printf("TRUE\n");
} 