#include <stdio.h>
int a[11],count[1004],sum,m,m2;
int main(){
    for(int i=1;i<=10;i++){
        scanf("%d",&a[i]);
        count[a[i]]++;
        sum+=a[i];
        if(count[a[i]]>m){
            m=count[a[i]];
            m2=a[i];
        }
    }
    printf("%d\n%d",sum/10,m2);
}