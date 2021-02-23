#include<iostream>
#include<utility>
#include<queue>
#include<set>
using namespace std;
int a,b,c,d,cnt;
set<int> s[100004];
queue<pair<int,int>>q1;
int main(){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    q1.push({0,0});
    while(!q1.empty()){
        queue<pair<int,int>> q2;
        while(!q1.empty()){
            pair<int,int> p=q1.front();q1.pop();
            int x=p.first,y=p.second;
            if(s[x].count(y)) continue;
                s[x].insert(y);
            if(x==c&&y==d){
                printf("%d",cnt);
                return 0;
            }
            if(x+y<b) q2.push({0,x+y});
            if(x+y>=b) q2.push({x-b+y,b});
            if(x+y<a) q2.push({x+y,0});
            if(x+y>=a) q2.push({a,y-a+x});
            q2.push({a,y});
            q2.push({x,b});
            q2.push({x,0});
            q2.push({0,y});
        }
        swap(q1,q2);
        cnt++;
    }
    printf("-1");
}