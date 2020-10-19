#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<char> v;
int l,c;
char m[5]={'a','e','i','o','u'};
void dfs(int i,vector<char> vv){
    vv.push_back(v[i]);
    if(vv.size()==l){
        int mo=0;
        for(int i=0;i<l;i++){
            for(int j=0;j<5;j++){
                if(vv[i]==m[j]){
                    mo++; break;
                }
            }
        }
        if(mo>0&&l-mo>1){
            for(int i=0;i<l;i++)
            printf("%c",vv[i]);
            printf("\n");
        }
        return;
    }
    for(int j=i+1;j<v.size();j++)
    dfs(j,vv);
}
int main(){
    scanf("%d %d",&l,&c);
    char t;
    for(int i=1;i<=c;i++)
    scanf(" %1c",&t),v.push_back(t);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        vector<char> vv;
        dfs(i,vv);
    }
}