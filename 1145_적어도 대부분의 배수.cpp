#include<stdio.h>
int main(){
    int a[5];
    for(int i=1;i<=5;i++)
    scanf("%d",&a[i]);
    int b=1;
    while(1){
        int cnt=0;
        for(int i=1;i<=5;i++)
            if(b%a[i]==0)
                cnt++;
        if(cnt>=3){
            printf("%d",b);
            return 0;
        }
        b++;
    }
}