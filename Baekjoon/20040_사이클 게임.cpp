#include<iostream>
int n,m,a,b,p[500004];
int find(int a){
    if(p[a]==a) return a;
    return p[a]=find(p[a]);
}
void uni(int a,int b){
    a=find(a);b=find(b);
    if(a==b) return;
    p[a]=b;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        int aa=find(a),bb=find(b);
        if(aa==bb){
            printf("%d",i);
            return 0;
        }
        uni(aa,bb);
    }
    printf("0");
}