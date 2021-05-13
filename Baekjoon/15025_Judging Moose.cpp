#include<bits/stdc++.h>
int l,r;
int main(){
    scanf("%d %d",&l,&r);
    if(l==0&&r==0) printf("Not a moose");
    else if(l==r)
    printf("Even %d",2*l);
    else printf("Odd %d",2*std::max(l,r));
}
