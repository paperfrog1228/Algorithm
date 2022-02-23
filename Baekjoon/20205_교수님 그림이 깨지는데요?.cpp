{\rtf1\ansi\ansicpg949\cocoartf2578
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
int n,k,a[11][11];\
int main()\{\
    scanf("%d %d",&n,&k);\
    for(int i=1;i<=n;i++)\
    for(int j=1;j<=n;j++)\
        scanf("%d",&a[i][j]);\
    for(int i=1;i<=n;i++)\
        for(int q=1;q<=k;q++)\{\
            for(int j=1;j<=n;j++)\
                for(int w=1;w<=k;w++)\
                    printf("%d ",a[i][j]);\
            printf("\\n");\
        \}\
\}}