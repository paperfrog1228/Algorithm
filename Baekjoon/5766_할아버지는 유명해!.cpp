#include<stdio.h>
int t,n,m,a[10004],b,fir,sec;
bool Testcase(){
    for(int i=1;i<=10000;i++)
        a[i]=0;
    fir=sec=0;
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)
        return false;
    for(int i=1;i<=n*m;i++){
        scanf("%d",&b);
        a[b]++;
    }
    for(int i=1;i<=10000;i++)
        if(a[i]>fir)
        fir=a[i];
    for(int i=1;i<=10000;i++){
        if(a[i]==fir)
            continue;
        if(a[i]>sec)
        sec=a[i];
    }
    for(int i=1;i<=10000;i++)
        if(a[i]==sec)
            printf("%d ",i);
    printf("\n");
    return true;
}
int main(){
    while(Testcase());
}