#include<stdio.h>
#include<string.h>
struct word{int cnt;char str[55];};
int n;
word w[20004],tmp[20004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(w[i].cnt<w[j].cnt||(w[i].cnt==w[j].cnt&&strcmp(w[i].str,w[j].str)<=0))
    tmp[k++]=w[i++];
    else if(w[i].cnt>w[j].cnt||(w[i].cnt==w[j].cnt&&strcmp(w[i].str,w[j].str)>0))
    tmp[k++]=w[j++];
    while(i<=m)
    tmp[k++]=w[i++];
    while(j<=r)
    tmp[k++]=w[j++];
    for(int a=l;a<=r;a++)
    w[a]=tmp[a];
}
void MergeSort(int l,int r){
    if(l>=r)
    return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",w[i].str);
        w[i].cnt=strlen(w[i].str);
    }
    MergeSort(1,n);
    char tmp[55];
    for(int i=1;i<=n;i++)
        if(strcmp(tmp,w[i].str)!=0){
        printf("%s\n",w[i].str);
        strcpy(tmp,w[i].str);
        }
}