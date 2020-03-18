#include<stdio.h>
void TestCase(){
    int n,temp;
    bool is_even;
    bool ans=true;;
    scanf("%d",&n);
    scanf("%d",&temp);
    if(temp%2==0)
        is_even=true;
    else
        is_even=false;
    for(int i=2;i<=n;i++){
        scanf("%d",&temp);
        if(is_even&&temp%2!=0){
            ans=false;
            continue;
        }
        if(!is_even&&temp%2==0)
            ans=false;
    }
    if(ans)
        printf("YES\n");
    else
        printf("NO\n");
    return;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}