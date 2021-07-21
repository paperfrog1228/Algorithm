{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
#include<algorithm>\
#include<vector>\
struct node\{int e;int d;\};\
using namespace std;\
vector<node> tree[1010];\
int vis[1010];\
long long search(int now,long long w)\{\
    vis[now]++;\
    long long sum=0;\
    int tmp=0;\
    for(auto next:tree[now])\
        if(vis[next.e]) continue;\
        else sum+=search(next.e,next.d),tmp++;\
    if(!tmp) return w;\
    return min(sum,w);\
\}\
void go()\{\
    int n,m,a,b,c;\
    scanf("%d %d",&n,&m);\
    while(m--)\{\
        scanf("%d %d %d",&a,&b,&c);\
        tree[a].push_back(\{b,c\});\
        tree[b].push_back(\{a,c\});\
    \}\
    if(n==1) printf("0\\n");\
    else printf("%lld\\n",search(1,987654321));\
    for(int i=0;i<=n;i++) vis[i]=0,tree[i].clear();\
\}\
int main()\{\
    int t;\
	scanf("%d",&t);\
    while(t--) go();\
\}}