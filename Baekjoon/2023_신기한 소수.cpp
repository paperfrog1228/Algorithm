{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
#include<algorithm>\
#include<bitset>\
#include<vector>\
#define mx 100000010\
using namespace std;\
vector<int> ans;\
int n;\
bool isPrime(int nn)\{\
    if(nn<2) return false;\
    for(int i=2; i*i<=nn; i++)\
        if(nn%i == 0) return false;\
    return true;\
\}\
void dfs(int nn,int cnt)\{\
    if(!isPrime(nn)) return;\
    if(cnt==n)\{\
        ans.push_back(nn);\
        return;\
    \}\
    nn*=10;\
    dfs(nn+1,cnt+1);\
    dfs(nn+3,cnt+1);\
    dfs(nn+7,cnt+1);\
    dfs(nn+9,cnt+1);\
\}\
int main()\{\
	scanf("%d",&n);\
    for(int i=2;i<=9;i++)\
        dfs(i,1);\
    sort(ans.begin(),ans.end());\
    for(auto a:ans) printf("%lld\\n",a);\
\}}