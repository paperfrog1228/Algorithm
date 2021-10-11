#include<iostream>
#include<string>
int t,n,m,k,l,x;
using namespace std;
std::string s[55];
int main(){
    scanf("%d",&t);
    for(int a=1;a<=t;a++){
        printf("Scenario #%d:\n",a);
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        std::cin>>s[i];
        scanf("%d",&k);
        while(k--){
            scanf("%d",&l);
            while(l--)
            scanf("%d",&x),
            std::cout<<s[x];
            printf("\n");
        }
        printf("\n");
    }
}