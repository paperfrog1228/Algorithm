#include<stdio.h>
#include<deque>
struct move{int pos;int time;};
int n,k,v[100004];
std::deque<move> d,tmp;
int main(){
    scanf("%d %d",&n,&k);
    d.push_back({n,0});
    while(1){
        move cur=d.front();
        d.pop_front();
        if(cur.pos>100000||cur.pos<0||v[cur.pos]) continue;
        v[cur.pos]++;
        if(cur.pos==k){
            printf("%d",cur.time);
            return 0;
        }
        if(cur.pos!=0)
        d.push_front({cur.pos*2,cur.time});
        d.push_back({cur.pos+1,cur.time+1});
        d.push_back({cur.pos-1,cur.time+1});
    }
}