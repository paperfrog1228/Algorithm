#include<bits/stdc++.h>
int n,l,p,v;
int main(){
    while(++n){
        scanf("%d %d %d",&l,&p,&v);
        if(l==0) return 0;
        printf("Case %d: %d\n",n,std::min(v%p,l)+(v/p)*l);
    }
}
