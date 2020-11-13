#include <stdio.h>
int n,t,a,b,c;
int main(){
    while(1){
        scanf("%d",&n);
        if(n==0) return 0;
        t=n,a=10000,b=1,c=0;
        bool flag=false;
        while(t>0){
            if(t/a>0)
                flag=true;
            if(flag)
                c+=t/a*b,b*=10,t%=a;
            a/=10;
        }
        if(n==c) printf("yes\n");
        else printf("no\n");
    }
}