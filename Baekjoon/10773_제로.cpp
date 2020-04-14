#include<stdio.h>
#include<stack>
using namespace std;
stack<int> s;
int k,tmp,sum=0;
int main(){
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&tmp);
        if(tmp==0)
        s.pop();
        else
        s.push(tmp);
    }
    while(!s.empty()){    
        sum+=s.top();
        s.pop();
    }
    printf("%d",sum);
}