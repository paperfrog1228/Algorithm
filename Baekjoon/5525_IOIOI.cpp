#include<stdio.h>
int n,m,i,j,a,b[10000005];
char p[1000005],t[1000005];
int main(){
    p[0]='I';
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    p[i*2-1]='O',p[i*2]='I';
    for(int i=0;i<m;i++)
    scanf("%c",&t[i]);
    i=0,j=-1;
    b[0]=-1;
    while(i<1+n*2){
        while(j>=0 && p[i]!=p[j])
            j=b[j];
        i++,j++;
        b[i]=j;
    }
    i=0,j=0;
    while(i<m){
        while(j>=0 && t[i] != p[j])
            j=b[j];
        i++,j++;
        if(j==n*2+1){
            a++;
            j=b[j];
        }
    }
    printf("%d",a);
}