#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
int n,m,x,y;
char map[400][400];
struct Window{char name[104];char title[104];int name_cnt;int title_cnt;int width;int height;};
std::vector<Window> list;
void Save(int y,int x){
    Window win={{},{},0,0,0,0};
    map[y][x]='.';
    while(map[y][x+win.width]!='+'){
        win.width++;
        if('a'<=map[y][x+win.width]&&map[y][x+win.width]<='z')
            win.name[win.name_cnt++]=map[y][x+win.width];
        if(map[y][x+win.width]!='.'&&map[y][x+win.width]!='+')
            win.title[win.title_cnt++]=map[y][x+win.width];
    }
    while(map[y+win.height][x]!='+')
        win.height++;
    for(int i=0;i<=win.height;i++)
    for(int j=0;j<=win.width;j++)
    map[y+i][x+j]='.';
    list.push_back(win);
}
bool cmp(const Window &w1, const Window &w2){
    if(strcmp(w1.name,w2.name)<0)
        return true;
    return false;   
}
void Print(int x,int y,Window &win){
    for(int i=1;i<win.height;i++)
        map[y+i][x]=map[y+i][x+win.width]='|';
    for(int i=1;i<win.width;i++)
        map[y+win.height][x+i]='-';
    for(int i=0;i<win.title_cnt;i++)
        map[y][x+i+1]=win.title[i];
    for(int i=1;i<win.height;i++)
    for(int j=1;j<win.width;j++)
        map[y+i][x+j]='.';
    map[y][x]=map[y][x+win.width]=map[y+win.height][x]=map[y+win.height][x+win.width]='+';
}
int main(){
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    scanf("%s",map[i]);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(map[i][j]=='+')
        Save(i,j);
    std::sort(list.begin(),list.end(),cmp);
    for(int i=0;i<list.size();i++)
        Print(x++,y++,list[i]);
    for(int i=0;i<m;i++)
        printf("%s\n",map[i]); 
}