#include <stdio.h>
int x,min=64,sum=64,cnt=1;
int main(){
    scanf("%d",&x);
    while(1){
        if(x < sum){
            sum-=min/2;
            if(x>sum){
                sum+=min/2;
                cnt++;
            }
            min=min/2;
        }
        if(x==sum){
            printf("%d",cnt);
            return 0;
        }
    }
}