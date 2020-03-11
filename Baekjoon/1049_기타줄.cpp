#include<stdio.h>
#define MIN(a,b)(a<b?a:b)
int n,m,set[53],piece[53];
int min,min_set=1000000000,min_piece=1000000000;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)
    scanf("%d %d",&set[i],&piece[i]);
    for(int i=1;i<=m;i++){
        if(min_set>set[i])
        min_set=set[i];
        if(min_piece>piece[i])
        min_piece=piece[i];
    }
    min=MIN(min_set*(n/6)+min_piece*(n%6),min_set*(n/6+1));
    min=MIN(min,n*min_piece);
    printf("%d",min);
}