#include<stdio.h>
unsigned long long n;
int arr[15]; 
void InsertionSort(int A[],int n){
    for(int i=1;i<=n;i++){
        int tmp=A[i];
        int j;
        for(j=i-1;j>0;j--){
            if(A[j]<tmp)
            A[j+1]=A[j];
            else
                break;
        }
        A[j+1]=tmp;
    }
}
int main(){
    scanf("%lld",&n);
    int i=0;
    while(n>0){
        i++;
        arr[i]=n%10;
        n/=10;
    }
    for(int j=1;j<=i;j++)
    InsertionSort(arr,i);
    for(int j=1;j<=i;j++)
        printf("%d",arr[j]);
}