#include<stdio.h>
struct node{int value;node *left;node *right;};
int a;
void Input(node *n,node *a){
    if(n->value>a->value){
        if(n->left==NULL){
            n->left=a;
            return;
        }
        Input((n->left),a);
    }
    else{
        if(n->right==NULL){
            n->right=a;
            return;
        }
        Input(n->right,a);
    }
}
void PostOrder(node *n){
    if(n->left!=NULL)
    PostOrder(n->left);
    if(n->right!=NULL)
    PostOrder(n->right);
    printf("%d\n",n->value);
}
int main(){
    scanf("%d",&a);
    node root={a,NULL,NULL};
   while(scanf("%d",&a)!=EOF){
        node* input=new node;
        *input = {a,NULL,NULL};
        Input(&root,input);
   }
    PostOrder(&root);
}