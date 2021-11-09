#include <iostream>
int t,n,m,c;
int main(){
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%d %d",&n,&m);
        for(int i=1;i<n;i++)
        for(int j=i+1;j<n;j++)
            if((i*i+j*j+m)%(i*j)==0) c++;
        printf("%d\n",c);
    }
}