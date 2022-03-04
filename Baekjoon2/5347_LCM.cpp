{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
int gcd(int a,int b) \{\
    if (b==0) return a;\
    else return gcd(b,a%b);\
\}\
int lcm(int a,int b) \{\
    return a*(b/gcd(a,b));\
\}\
int n,a,b,c;\
int main()\{\
    scanf("%d",&n);\
    while(n--)\{\
        scanf("%d %d",&a,&b);\
        printf("%d\\n",lcm(a,b));\
    \}\
\}}