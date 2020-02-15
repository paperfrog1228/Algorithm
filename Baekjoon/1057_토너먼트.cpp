#include<stdio.h>
int main(){
    int n,a,b,round=1,temp=2,start,end;
    scanf("%d %d %d",&n,&a,&b);
    while(temp<=n*2){
        int start=0,end=0;
        while(end<=n){
            start=end+1;
            end=start+temp-1;
            if(start<=a&&a<=end&&start<=b&&b<=end)
                goto Ans;
        }
        temp*=2;
        round++;
    }
    printf("-1\n");
    return 0;
    Ans:
    printf("%d\n",round);
}