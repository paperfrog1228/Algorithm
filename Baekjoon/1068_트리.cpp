#include<stdio.h>
#include<vector>
using namespace std;
vector<int> tree[55];
int n,tmp,d,cnt,root;
void Search(int p){
    if(p==d)
        return;
    if(tree[p].size()==0)
        cnt++;
    for(int i=0;i<tree[p].size();i++){
        if(tree[p][i]==d){
            if(tree[p].size()==1)
            cnt++;
        }
        else
        Search(tree[p][i]);
    }
}
int main(){
    scanf("%d",&n);
    int tmp;
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        if(tmp==-1)
        root=i;
        else
        tree[tmp].push_back(i);
    }
    scanf("%d",&d);
    Search(root);
    printf("%d",cnt);
}