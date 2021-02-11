#include <iostream>
int self[10004];
int main(){
    for(int i=1;i<=10000;i++){
        int n=i,t=i;
        while(n>0)t+=n%10,n/=10;
        if(t>10000) continue;
        self[t]=1;
    }
    for(int i=1;i<=10000;i++)
    if(self[i]==0) printf("%d\n",i);
}
