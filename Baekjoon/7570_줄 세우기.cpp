#include<stdio.h>
#define FOR(i,n) for(int i=1;i<=n;i++)
int main(){
    int n,line[1000002],pos[1000002],max=0;
    scanf("%d",&n);
    FOR(i,n){
        scanf("%d",&line[i]);
        pos[line[i]]=i;
    }
    FOR(i,n-1){
        int a=line[i]+1;
        int b=pos[a];
        int temp=1;
        int c=i;
        while(b>c){
            c=b;
            a++;
            b=pos[a];    
            temp++;
        }
        if(max<temp)
        max=temp;
    }
    printf("%d",n-max);
}