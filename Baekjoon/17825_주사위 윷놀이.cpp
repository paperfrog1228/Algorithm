#include<stdio.h>
#include<vector>
#include<utility>
std::pair<int,int> map[200];
int dice[12],max;
void dfs(std::vector<int> pos,int di,int score){
    if(max<score)   max=score; 
    if(di==11)  return;
    
    for(int i=0;i<4;i++){
        int cur=pos[i],cnt=dice[di];
        if(cur==99) continue;
        bool heap=false;
        if(map[cur].second!=0)
            cur=map[cur].second,cnt--;
        while(cnt>0)
            cur=map[cur].first,cnt--;
        std::vector<int> ppos=pos;
        ppos[i]=cur;
        if(cur==99){
            dfs(ppos,di+1,score);
            continue;
        }
        for(int j=0;j<4;j++)
            if(i!=j&&cur==pos[j])
                heap=true;
        if(cur>100) cur-=100;
        if(!heap) dfs(ppos,di+1,score+cur);
    }
}
int main(){
    for(int i=0;i<40;i+=2) map[i].first=i+2;
    map[10].second=113;
    map[113].first=116;
    map[116].first=119;
    map[119].first=25;
    map[20].second=122;
    map[122].first=124;
    map[124].first=25;
    map[30].second=128;
    map[128].first=127;
    map[127].first=126;
    map[126].first=25;
    map[25].first=130;
    map[130].first=135;
    map[135].first=40;
    map[40].first=99;
    map[99].first=99;
    //ÀÌ ¾¾¹ß
    for(int i=1;i<=10;i++) scanf("%d",&dice[i]);
    std::vector<int> v={0,0,0,0};
    dfs(v,1,0);
    printf("%d",max);
}