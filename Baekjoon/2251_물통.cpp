#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct w{int x;int y;int z;};
int a,b,c,vis[202][202][202],avis[202];
vector<int> ans;
queue<w> q;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    q.push({0,0,c});
    while(!q.empty()){
        w ww=q.front();q.pop();
        if(vis[ww.x][ww.y][ww.z]) continue;
        vis[ww.x][ww.y][ww.z]++; 
        if(!avis[ww.z]&&ww.x==0) ans.push_back(ww.z),avis[ww.z]++;
        int tmp=ww.x-(b-ww.y);
        if(0<=tmp)
            q.push({tmp,b,ww.z});
        tmp=ww.y-(a-ww.x);
        if(0<=tmp)
            q.push({a,tmp,ww.z});
        tmp=ww.x+ww.y;
        if(tmp<=b)
            q.push({0,tmp,ww.z});
        if(tmp<=a)
            q.push({tmp,0,ww.z});

        tmp=ww.y-(c-ww.z);
        if(0<=tmp)
            q.push({ww.x,tmp,c});
        tmp=ww.z-(b-ww.y);
        if(0<=tmp)
            q.push({ww.x,b,tmp});
        tmp=ww.y+ww.z;
        if(tmp<=b)
            q.push({ww.x,tmp,0});
        if(tmp<=c)
            q.push({ww.x,0,tmp});

        tmp=ww.x-(c-ww.z);
        if(0<=tmp)
            q.push({tmp,ww.y,c});
        tmp=ww.z-(a-ww.x);
        if(0<=tmp)
            q.push({a,ww.y,tmp});
        tmp=ww.x+ww.z;
        if(tmp<=a)
            q.push({tmp,ww.y,0});
        if(tmp<=c)
            q.push({0,ww.y,tmp});
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
}
