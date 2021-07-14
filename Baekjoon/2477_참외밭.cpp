{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue254;\red144\green1\blue18;
\red0\green0\blue0;\red19\green120\blue72;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c99608;\cssrgb\c63922\c8235\c8235;
\cssrgb\c0\c0\c0;\cssrgb\c3529\c53333\c35294;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl420\partightenfactor0

\f0\fs28 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include<\cf4 \strokec4 stdio.h\cf2 \strokec2 >\cf5 \cb1 \strokec5 \
\cf2 \cb3 \strokec2 #include<\cf4 \strokec4 vector\cf2 \strokec2 >\cf5 \cb1 \strokec5 \
\cf2 \cb3 \strokec2 #include<\cf4 \strokec4 math.h\cf2 \strokec2 >\cf5 \cb1 \strokec5 \
\cf2 \cb3 \strokec2 using\cf5 \strokec5  \cf2 \strokec2 namespace\cf5 \strokec5  std;\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3 vector<pair<\cf2 \strokec2 int\cf5 \strokec5 ,\cf2 \strokec2 int\cf5 \strokec5 >> v;\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf2 \cb3 \strokec2 int\cf5 \strokec5  n,d,s,px,py,small,bx,by;\cb1 \
\cf2 \cb3 \strokec2 long\cf5 \strokec5  \cf2 \strokec2 long\cf5 \strokec5  ans;\cb1 \
\cf2 \cb3 \strokec2 int\cf5 \strokec5  ccw(\cf2 \strokec2 int\cf5 \strokec5  x1, \cf2 \strokec2 int\cf5 \strokec5  y1, \cf2 \strokec2 int\cf5 \strokec5  x2, \cf2 \strokec2 int\cf5 \strokec5  y2, \cf2 \strokec2 int\cf5 \strokec5  x3, \cf2 \strokec2 int\cf5 \strokec5  y3) \{\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3     \cf2 \strokec2 int\cf5 \strokec5  temp = x1*y2+x2*y3+x3*y1;\cb1 \
\cb3     temp = temp - y1*x2-y2*x3-y3*x1;\cb1 \
\cb3     \cf2 \strokec2 if\cf5 \strokec5  (temp > \cf6 \strokec6 0\cf5 \strokec5 ) \cf2 \strokec2 return\cf5 \strokec5  \cf6 \strokec6 1\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 else\cf5 \strokec5  \cf2 \strokec2 if\cf5 \strokec5  (temp < \cf6 \strokec6 0\cf5 \strokec5 ) \cf2 \strokec2 return\cf5 \strokec5  -\cf6 \strokec6 1\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 else\cf5 \strokec5  \cf2 \strokec2 return\cf5 \strokec5  \cf6 \strokec6 0\cf5 \strokec5 ;\cb1 \
\cb3 \}\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf2 \cb3 \strokec2 int\cf5 \strokec5  main()\{\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3     scanf(\cf4 \strokec4 "%d"\cf5 \strokec5 ,&n);\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 1\cf5 \strokec5 ;i<=\cf6 \strokec6 6\cf5 \strokec5 ;i++)\{\cb1 \
\cb3         scanf(\cf4 \strokec4 "%d %d"\cf5 \strokec5 ,&d,&s);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (d==\cf6 \strokec6 1\cf5 \strokec5 ) px+=s,bx=max(bx,s);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (d==\cf6 \strokec6 2\cf5 \strokec5 ) px-=s,bx=max(bx,s);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (d==\cf6 \strokec6 3\cf5 \strokec5 ) py-=s,by=max(by,s);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (d==\cf6 \strokec6 4\cf5 \strokec5 ) py+=s,by=max(by,s);\cb1 \
\cb3         v.push_back(\{px,py\});\cb1 \
\cb3     \}\cb1 \
\cb3     v.push_back(v[\cf6 \strokec6 0\cf5 \strokec5 ]);\cb1 \
\cb3     v.push_back(v[\cf6 \strokec6 1\cf5 \strokec5 ]);\cb1 \
\cb3     \cf2 \strokec2 int\cf5 \strokec5  a=\cf6 \strokec6 0\cf5 \strokec5 ,b=\cf6 \strokec6 0\cf5 \strokec5 ,c=\cf6 \strokec6 0\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 0\cf5 \strokec5 ;i<v.size()-\cf6 \strokec6 2\cf5 \strokec5 ;i++)\{\cb1 \
\cb3         \cf2 \strokec2 int\cf5 \strokec5  t=ccw(v[i].first,v[i].second,v[i+\cf6 \strokec6 1\cf5 \strokec5 ].first,v[i+\cf6 \strokec6 1\cf5 \strokec5 ].second,v[i+\cf6 \strokec6 2\cf5 \strokec5 ].first,v[i+\cf6 \strokec6 2\cf5 \strokec5 ].second);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (t<\cf6 \strokec6 0\cf5 \strokec5 ) a++; \cf2 \strokec2 else\cf5 \strokec5  b++;\cb1 \
\cb3     \}\cb1 \
\cb3     \cf2 \strokec2 if\cf5 \strokec5 (a>b) c=-\cf6 \strokec6 1\cf5 \strokec5 ; \cf2 \strokec2 else\cf5 \strokec5  c=\cf6 \strokec6 1\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 0\cf5 \strokec5 ;i<v.size()-\cf6 \strokec6 2\cf5 \strokec5 ;i++)\{\cb1 \
\cb3         \cf2 \strokec2 int\cf5 \strokec5  t=ccw(v[i].first,v[i].second,v[i+\cf6 \strokec6 1\cf5 \strokec5 ].first,v[i+\cf6 \strokec6 1\cf5 \strokec5 ].second,v[i+\cf6 \strokec6 2\cf5 \strokec5 ].first,v[i+\cf6 \strokec6 2\cf5 \strokec5 ].second);\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (t!=c)\{\cb1 \
\cb3             small=(abs(v[i].first-v[i+\cf6 \strokec6 2\cf5 \strokec5 ].first)*abs(v[i].second-v[i+\cf6 \strokec6 2\cf5 \strokec5 ].second));\cb1 \
\cb3             \cf2 \strokec2 break\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3     \}\cb1 \
\cb3     printf(\cf4 \strokec4 "%d"\cf5 \strokec5 ,(bx*by-small)*n);\cb1 \
\cb3 \}\cb1 \
}