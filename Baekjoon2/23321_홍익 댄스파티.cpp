{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
using namespace std;\
string s[5];\
char ans[5][10010];\
int main()\{\
    for(int i=0;i<5;i++)\
        cin>>s[i];\
    for(int i=0;i<s[0].length();i++)\{\
        if(s[0][i]=='o')\{\
            ans[0][i]='.';\
            ans[1][i]='o';\
            ans[2][i]='m';\
            ans[3][i]='l';\
            ans[4][i]='n';\
        \}\
        else if(s[1][i]=='o')\{\
            ans[0][i]='o';\
            ans[1][i]='w';\
            ans[2][i]='l';\
            ans[3][i]='n';\
            ans[4][i]='.';\
        \}\
        else\{\
            ans[0][i]='.';\
            ans[1][i]='.';\
            ans[2][i]='o';\
            ans[3][i]='L';\
            ans[4][i]='n';\
        \}\
    \}\
    for(int i=0;i<5;i++)\
        cout<<ans[i]<<endl;\
\}}