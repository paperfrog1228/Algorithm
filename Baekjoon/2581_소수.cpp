#include <stdio.h>
int n,m,prime[10004],min=10004,sum=0;
int main(){
    prime[1]=1;
    for(int i=2;i<=100;i++){
        if(prime[i]==1)
        continue;
        int j=i;
        while(j<=10000){
            prime[j+i]=1;
            j+=i;
        }        
    }
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
        if(prime[i]==0){
            if(min>i)
            min=i;
            sum+=i;
        }
    if(sum==0){
        printf("-1");
        return 0;
    }    
    printf("%d\n%d",sum,min);
}