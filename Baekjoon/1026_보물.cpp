#include<stdio.h>
int n,a[55],b[55],sum;
void SelectionSort(int A[]){
    for(int i=n;i>1;i--){
        int max=0,max_index=0;
        for(int j=1;j<=i;j++){
            if(A[j]>max){
                max=A[j];
                max_index=j;
            }
        }
        int tmp=A[i];
        A[i]=A[max_index];
        A[max_index]=tmp;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    scanf("%d",&b[i]);
    SelectionSort(a);
    SelectionSort(b);
    for(int i=1;i<=n;i++)
    sum+=a[i]*b[n-i+1];
    printf("%d\n",sum);
}