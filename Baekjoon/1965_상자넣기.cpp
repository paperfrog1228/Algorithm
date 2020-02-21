#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    int n,t;
    vector<int> box,list;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        box.push_back(t);
    }
    list.push_back(-9999);
    for(int i=0;i<n;i++){
        if(list.back()<box[i])
            list.push_back(box[i]);
        else{
        vector<int>::iterator itr= lower_bound(list.begin(),list.end(),box[i]);
        *itr=box[i];
        }
    }
    printf("%d",list.size()-1);
}
