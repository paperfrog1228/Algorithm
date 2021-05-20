#include<bits/stdc++.h>
int n,i;
int main(){
    while(++i){
        scanf("%d",&n);
        if(n==0) return 0;
        printf("%d. ",i);
        n*=3;
        if(n%2==0) printf("even"),n/=2;
        else printf("odd"),++n/=2;
        n*=3;
        printf(" %d\n",n/9);
    }
}
