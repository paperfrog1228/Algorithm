#include<stdio.h>
#define FOR(i,n) for(int i=1;i<=n;i++)
int t,n,m;
void Update(int tree[],int i,int diff){
    while(i<n+m+1){
        tree[i]+=diff;
        i+=(i&-i);
    }
}
int GetSum(int tree[],int a){
    int ans=0;
    while(a>0){
        ans += tree[a];
        a-=(a&-a);
    }
    return ans;
}
void TestCase(){
    scanf("%d %d",&n,&m);
    int arr[n+1],tree[n+m+3],pos[n+1];
    for(int i=1;i<=n+m+3;i++)
    tree[i]=0;
    FOR(i,n){
    pos[i]=i+m;
    Update(tree,pos[i],1);
    }
    FOR(i,m){
        int a;
        scanf("%d",&a);
        printf("%d ",GetSum(tree,pos[a])-1);
        Update(tree, pos[a],-1);
        pos[a]=m+1-i;
        Update(tree,pos[a],1);
    }
}
int main(){
    scanf("%d",&t);
    FOR(i,t){
    TestCase();
    printf("\n");
    }
}