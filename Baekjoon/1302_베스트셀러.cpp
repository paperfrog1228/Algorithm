#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Ranking{string name;int sell;};
vector<Ranking> book;
bool Compare(Ranking a,Ranking b){
    if(a.sell>b.sell) return 1;
    if(a.sell<b.sell) return 0;
    return a.name<b.name;
}
int main(){
    int n;
    cin>>n;
    bool flag;
    for(int i=1;i<=n;i++){
        flag=true;
        string s;
        cin>>s;
        for(int j=0;j<book.size();j++)
            if(book[j].name==s){
                book[j].sell++;
                flag=false;
                break;
            }
        if(flag){    
        Ranking r={s,1};
        book.push_back(r);
        }
    }
    sort(book.begin(),book.end(),Compare);
    cout<<book[0].name<<endl;
}