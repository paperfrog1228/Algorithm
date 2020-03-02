#include<stdio.h>
#include <algorithm>
using namespace std;
int n,line[10002];
int main(){
    int x1,x2,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&x1,&x2);
        if(x1>x2)
            swap(x1,x2);
        for(int j=x1;j<x2;j++)
            line[j]=1;
    }
    for(int i=1;i<=10000;i++)
        if(line[i])
            ans++;
    printf("%d",ans);
}