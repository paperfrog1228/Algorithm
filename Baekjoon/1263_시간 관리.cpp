#include<stdio.h>
struct Work{int s;int t;};
int n,time=987654321;
Work work[1004],temp[1004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
        if(work[i].t>work[j].t)
            temp[k++]=work[i++];
        else
            temp[k++]=work[j++];
    for(;i<=m;i++)
        temp[k++]=work[i];
    for(;j<=r;j++)
        temp[k++]=work[j];
    for(int x=l;x<=r;x++)
        work[x]=temp[x];
}
void Mergesort(int l,int r){
    if(r<=l)
    return;
    int m=(l+r)/2;
    Mergesort(l,m);
    Mergesort(m+1,r);
    Merge(l,m,r);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&work[i].s,&work[i].t);
    Mergesort(1,n);
    for(int i=1;i<=n;i++){
        if(work[i].t<time)
            time=work[i].t;
        time-=work[i].s;
        if(time<0){
            printf("-1");
            return 0;
        }
    }
    printf("%d",time);
}