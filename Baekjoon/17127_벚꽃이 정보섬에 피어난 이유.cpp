{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
int n,a[12],ans;\
int plus(int l,int r)\{\
    int ret=1;\
    for(int i=l;i<=r;i++)\
        ret*=a[i];\
    return ret;\
\}\
int main()\{\
    scanf("%d",&n);\
    for(int i=1;i<=n;i++)\
        scanf("%d",&a[i]);\
    for(int i=1;i<n;i++)\{\
      for (int j=i+1;j<n;j++) \{\
            for (int k=j+1;k<n;k++) \{\
                int tmp=plus(1,i)+plus(i+1,j)+plus(j+1,k)+plus(k+1,n);\
                if(ans<tmp)\
                    ans=tmp;\
            \}\
        \}\
    \}\
    printf("%d",ans);\
\}}