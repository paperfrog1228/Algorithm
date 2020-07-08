#include<stdio.h>
int n;
float sum,a[1004],max;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%f",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i]/max*100;
        sum+=a[i];
    }
    printf("%f",sum/n);
}