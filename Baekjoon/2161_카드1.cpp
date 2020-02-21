#include <stdio.h>
#include<queue>
using namespace std;
int main(){
    queue<int> card;
    vector<int> ans;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    card.push(i);
    while(card.size()>1){
    ans.push_back(card.front());
    card.pop();
    if(card.size()==1)
        break;
    int temp=card.front();
    card.push(temp);
    card.pop();
    }
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
    printf("%d",card.front());
}