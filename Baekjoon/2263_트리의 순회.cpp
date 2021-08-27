#include<stdio.h>
int n,inorder[100010],postorder[100010],index[100010];
void div(int in_l,int in_r,int post_l,int post_r){
    if(in_r<in_l||post_r<post_l) return;
    int rootPos=index[postorder[post_r]];
    printf("%d ",postorder[post_r]);
    int left=rootPos-in_l;
    int right=in_r-in_l-left;
    div(in_l,rootPos-1,post_l,post_l+left-1);
    div(rootPos+1,in_r,post_l+left,post_r-1);

}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&inorder[i]),index[inorder[i]]=i;
    for(int i=1;i<=n;i++) scanf("%d",&postorder[i]);
    div(1,n,1,n);
}