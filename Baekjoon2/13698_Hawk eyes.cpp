{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
#include<string>\
using namespace std;\
string s;\
pair<int,int> a[6]=\{\{0,1\},\{0,2\},\{0,3\},\{1,2\},\{1,3\},\{2,3\}\};\
int b[4]=\{1,0,0,2\};\
int main() \{\
    cin>>s;\
    for(int i=0;i<s.length();i++)\{\
        int f=a[s[i]-'A'].first;\
        int t=a[s[i]-'A'].second;\
        int tmp=b[f];\
        b[f]=b[t];\
        b[t]=tmp;\
    \}\
    for(int i=0;i<4;i++)\
        if(b[i]==1)\
            printf("%d\\n",i+1);\
    for(int i=0;i<4;i++)\
        if(b[i]==2)\
            printf("%d",i+1);\
\}}