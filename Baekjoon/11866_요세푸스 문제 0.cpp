#include<stdio.h>
int n,k,people[1004],ans[1004];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        people[i]=1;
    int i=0,j=1,a=1;
    while(a<=n){
        if(j>n)
        j=1;
        if(people[j]==1)
            i++;
        if(i==k){
            ans[a]=j;
            people[j]=0;
            a++;
            i=0;
        }
        j++;
    }
    printf("<");
    for(int i=1;i<n;i++)
    printf("%d, ",ans[i]);
    printf("%d>",ans[n]);
}