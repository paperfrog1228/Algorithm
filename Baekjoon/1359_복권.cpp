#include<stdio.h>
int n,m,k;
long long Comb(int n,int r){
    int p =1;
    int c=1;
    while(r>0){
        c*=n--;
        p*=r--;
    }
    return c/p;
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    double res = 0.0;
    double p = Comb(n,m);
    while(m>=k)
    {
        if(n-m < m-k){
            k++;
            continue;
        }
        double c = Comb(m,k) * Comb(n-m,m-k);
        res += c/p;
        k++;

    }
    printf("%.16f",res);
    return 0;
}
//코드 카피함. 개어렵네