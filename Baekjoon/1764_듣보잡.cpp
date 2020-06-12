#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int n,m;
map<string,bool> Map;
vector<string> list;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        Map[s]=true;
    }
    for(int i=1;i<=m;i++){
        string s;
        cin>>s;
        if(Map[s])
        list.push_back(s);
    }
   sort(list.begin(),list.end());
    printf("%d\n",list.size());
    for(int i=0;i<list.size();i++)
    cout<<list[i]<<endl;
}