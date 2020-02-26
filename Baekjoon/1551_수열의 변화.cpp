#include<stdio.h>
int main(){
  int n,k,a[23],b[23],j=1;
  char trash;
  scanf("%d %d",&n,&k);
  for(int i=1;i<=2*n-1;i++){
    if(i%2){
        scanf("%d",&a[j]);
        j++;
        continue;
    }
    scanf("%c",&trash);
  }
  j=0;
 while(j<k){
    if(j%2){
        a[1]=b[2]-b[1];
        for(int i=2;i<n-j;i++)
            a[i]=b[i+1]-b[i];
    }
    else{
        b[1]=a[2]-a[1];
        for(int i=2;i<n-j;i++)
        b[i]=a[i+1]-a[i];
    }
    j++;
 }
 if(j%2){
 for(int i=1;i<n-k;i++)
    printf("%d,",b[i]);
    printf("%d",b[n-k]);
 }
 else{
 for(int i=1;i<n-k;i++)
     printf("%d,",a[i]);
    printf("%d",a[n-k]);
 }
}