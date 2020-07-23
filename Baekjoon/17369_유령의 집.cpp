#include<stdio.h>
#include<algorithm>
#include<vector>
#define MAX 300009
using namespace std;
struct Pos{int x;int y;char type;};
struct Ans{bool check;int ghost;long long int dist;};
vector<Pos> vert[MAX],hori[MAX];
Ans U[MAX],D[MAX],L[MAX],R[MAX];
int n,m,k,q,x,y,num,ghost,cur_x,cur_y;
long long int dist,all_dist;
char c;
bool VertCmp(const Pos &p1,const Pos &p2){
    if(p1.y<p2.y)return true;
    return false;
}
bool HoriCmp(const Pos &p1,const Pos &p2){
    if(p1.x<p2.x)return true;
    return false;
}
int UpperBound(bool x,vector<Pos> &v,int n){
    int l=0,r=v.size()-1;
    while(l<r){
        int m=(l+r)/2;
        if(v[m].x<=n&&x)
            l=m+1;
        else if(v[m].y<=n&&!x)
            l=m+1;
        else
            r=m;
    }
    if(r>=v.size()-1)
    return -1;
    return r;
}
int LowerBound(bool x,vector<Pos> &v,int n){
    int l=0,r=v.size()-1;
    while(l<r){
        int m=(l+r)/2;
        if(v[m].x<n&&x)
            l=m+1;
        else if(v[m].y<n&&!x)
            l=m+1;
        else
            r=m;
    }
    if(r>0)
    return r-1;
    return -1;
}
void Check(char c,int num,int pivot){
    char go=c;
    Pos p;
    if(c=='U'){
        int i=UpperBound(false,vert[num],pivot);
        if(i==-1)
            return;
        p=vert[num][i];
        if(p.type=='#')
            return;
        if(p.type=='/')
            go='R';
        if(p.type=='\\')
            go='L';
        all_dist+=(p.y-cur_y);
    }
    else if(c=='D'){
        int i=LowerBound(false,vert[num],pivot);
        if(i==-1)
            return;
        p=vert[num][i];
        if(p.type=='#')
            return;
        if(p.type=='/')
            go='L';
        if(p.type=='\\')
            go='R';
        all_dist+=(cur_y-p.y);
    }
    else if(c=='R'){
        int i=LowerBound(true,hori[num],pivot);
        if(i==-1)
            return;
        p=hori[num][i];
        if(p.type=='#')
            return;
        if(p.type=='/')
            go='U';
        if(p.type=='\\')
            go='D';
        all_dist+=(cur_x-p.x);
    }
    else if(c=='L'){
        int i=UpperBound(true,hori[num],pivot);
        if(i==-1)
            return;
        p=hori[num][i];
        if(p.type=='#')
            return;
        if(p.type=='/')
            go='D';
        if(p.type=='\\')
            go='U';
        all_dist+=(p.x-cur_x);
    }
    if(go=='R'||go=='L'){
        pivot=p.x;
        num=p.y;
    }
    else {
        pivot=p.y;
        num=p.x;
    }
    cur_x=p.x;
    cur_y=p.y;
    if(p.type=='!'){
        ghost++;
        dist+=all_dist;
    }
    Check(go,num,pivot);
}
int main(){
    scanf("%d %d %d %d",&n,&m,&k,&q);
    for(int i=0;i<k;i++){
        scanf("%d %d %c",&y,&x,&c);
        getchar();
        vert[x].push_back({x,y,c});
        hori[y].push_back({x,y,c});
    }
    for(int i=1;i<=m;i++){
        vert[i].push_back({i,n+1,'#'});
        sort(vert[i].begin(),vert[i].end(),VertCmp);
    }
    for(int i=1;i<=n;i++){
        hori[i].push_back({m+1,i,'#'});
        sort(hori[i].begin(),hori[i].end(),HoriCmp);
    }
    for(int i=1;i<=q;i++){
        ghost=dist=all_dist=0;
        scanf("%c",&c);
        scanf("%d",&num);
        getchar();
        int pivot=0;
        cur_x=cur_y=0;
        Ans *ans;
        if(c=='U')
            ans=U,pivot=0,cur_x=num,cur_y=pivot;
        if(c=='L')
            ans=L,pivot=0,cur_x=pivot,cur_y=num;
        if(c=='D')
            ans=D,pivot=n+1,cur_x=num,cur_y=pivot;
        if(c=='R')
            ans=R,pivot=m+1,cur_x=pivot,cur_y=num;
        if(ans[num].check)
            ghost=ans[num].ghost,dist=ans[num].dist;
        else{
            Check(c,num,pivot);
            ans[num]={true,ghost,dist};
        }
        printf("%d %lld\n",ghost,dist);
    }
}