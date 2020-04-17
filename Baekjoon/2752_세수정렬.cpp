#include<stdio.h>
int arr[1000005];
void BubbleSort(int A[]){
    for(int i=1;i<=3;i++){
        for(int j=1;j<3;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main(){
    for(int i=1;i<=3;i++)
    scanf("%d",&arr[i]);
    BubbleSort(arr);
    for(int i=1;i<=3;i++)
    printf("%d ",arr[i]);
}