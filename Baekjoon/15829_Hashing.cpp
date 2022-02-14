{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
int r=31,m=1234567891,l;\
long long ans=0,plus;\
char c;\
long long p(int i)\{\
    long long ret=1;\
    for(int j=0;j<i;j++)\
        ret*=31,ret%=m;\
    return ret;\
\}\
int main() \{ \
    scanf("%d",&l);\
    for(int i=0;i<l;i++)\{\
       scanf(" %1c",&c);\
       ans=(ans+(c-'a'+1)*p(i))%m;\
    \}\
    printf("%lld",ans);\
\}}