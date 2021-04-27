#include <bits/stdc++.h>
using namespace std;
int n,p[300004];
int find(int a){
    if(p[a]==a) return a;
    return p[a]=find(p[a]);
}
void merge(int a,int b){
    int x=find(a);
    int y=find(b);
    p[x]=y;
}
int main(){
    int a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=1;i<=n-2;i++){
        scanf("%d %d",&a,&b);
        merge(a,b);
    }
    int pp=find(1);
    for(int i=1;i<=n;i++){
        if(pp!=find(i)){
            printf("%d %d\n",1,i);
            return 0;
        }
    }
}
