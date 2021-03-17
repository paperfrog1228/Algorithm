#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
priority_queue<int,vector<int>> max_heap;
priority_queue<int,vector<int>,greater<int>> min_heap;
int n,a;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(max_heap.size()<=min_heap.size()) max_heap.push(a);
        else min_heap.push(a);
        if(min_heap.size()>0){
            if(max_heap.top()>min_heap.top()){
                int tmp1=max_heap.top();
                int tmp2=min_heap.top();
                max_heap.pop();
                min_heap.pop();
                max_heap.push(tmp2);
                min_heap.push(tmp1);
            }
        }
        printf("%d\n",max_heap.top());
    }
}
