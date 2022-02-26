{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
int n,a[1010],sum;\
int main()\{\
    scanf("%d",&n);\
    for(int i=0;i<n;i++)\
        scanf("%d",&a[i]),sum+=a[i];\
    sum/=2;\
    for(int i=0;i<n;i++) \{ \
        int tmp=0; \
        for (int j=0;j<n;j+=2)\
            tmp+=a[(i+j)%n]; \
        printf("%d\\n",tmp-sum);\
    \}\
\}}