{\rtf1\ansi\ansicpg949\cocoartf2578
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset129 AppleSDGothicNeo-Regular;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
#include<string>\
using namespace std;\
string s;\
int n;\
bool f=false;\
int main() \{\
    scanf("%d",&n);\
    for(int i=1;i<=n;i++)\{\
        cin>>s;\
        if(s.find("anj")!=-1&&s.size()==3)\
            f=true;\
    \}\
    printf("
\f1 \'b9\'b9\'be\'df
\f0 ");\
    f?printf(";"):printf("?");\
\}}