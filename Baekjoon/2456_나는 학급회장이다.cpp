{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue254;\red144\green1\blue18;
\red0\green0\blue0;\red19\green120\blue72;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c99608;\cssrgb\c63922\c8235\c8235;
\cssrgb\c0\c0\c0;\cssrgb\c3529\c53333\c35294;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl420\partightenfactor0

\f0\fs28 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include<\cf4 \strokec4 iostream\cf2 \strokec2 >\cf5 \cb1 \strokec5 \
\cf2 \cb3 \strokec2 int\cf5 \strokec5  n,score[\cf6 \strokec6 4\cf5 \strokec5 ],count[\cf6 \strokec6 4\cf5 \strokec5 ],a,b,c,mx,mxi;\cb1 \
\cf2 \cb3 \strokec2 int\cf5 \strokec5  main()\{\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3     scanf(\cf4 \strokec4 "%d"\cf5 \strokec5 ,&n);\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 0\cf5 \strokec5 ;i<n;i++)\{\cb1 \
\cb3         scanf(\cf4 \strokec4 "%d %d %d"\cf5 \strokec5 ,&a,&b,&c);\cb1 \
\cb3         score[\cf6 \strokec6 1\cf5 \strokec5 ]+=a;\cb1 \
\cb3         score[\cf6 \strokec6 2\cf5 \strokec5 ]+=b;\cb1 \
\cb3         score[\cf6 \strokec6 3\cf5 \strokec5 ]+=c;\cb1 \
\cb3         count[\cf6 \strokec6 1\cf5 \strokec5 ]+=a*a;\cb1 \
\cb3         count[\cf6 \strokec6 2\cf5 \strokec5 ]+=b*b;\cb1 \
\cb3         count[\cf6 \strokec6 3\cf5 \strokec5 ]+=c*c;\cb1 \
\cb3     \}\cb1 \
\cb3     \cf2 \strokec2 bool\cf5 \strokec5  d=\cf2 \strokec2 false\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 1\cf5 \strokec5 ;i<=\cf6 \strokec6 3\cf5 \strokec5 ;i++)\{\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (mx<score[i])\{\cb1 \
\cb3             mx=score[i];\cb1 \
\cb3             mxi=i;\cb1 \
\cb3             d=\cf2 \strokec2 false\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3         \cf2 \strokec2 else\cf5 \strokec5  \cf2 \strokec2 if\cf5 \strokec5 (mx==score[i])\{\cb1 \
\cb3             d=\cf2 \strokec2 true\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3     \}\cb1 \
\cb3     \cf2 \strokec2 if\cf5 \strokec5 (!d)\{\cb1 \
\cb3         printf(\cf4 \strokec4 "%d %d"\cf5 \strokec5 ,mxi,mx);\cb1 \
\cb3         \cf2 \strokec2 return\cf5 \strokec5  \cf6 \strokec6 0\cf5 \strokec5 ;\cb1 \
\cb3     \}\cb1 \
\cb3     d=\cf2 \strokec2 false\cf5 \strokec5 ;\cb1 \
\cb3     mx=\cf6 \strokec6 0\cf5 \strokec5 ;\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 1\cf5 \strokec5 ;i<=\cf6 \strokec6 3\cf5 \strokec5 ;i++)\{\cb1 \
\cb3         \cf2 \strokec2 if\cf5 \strokec5 (mx<count[i])\{\cb1 \
\cb3             mx=count[i];\cb1 \
\cb3             mxi=i;\cb1 \
\cb3             d=\cf2 \strokec2 false\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3         \cf2 \strokec2 else\cf5 \strokec5  \cf2 \strokec2 if\cf5 \strokec5 (mx==count[i])\{\cb1 \
\cb3             d=\cf2 \strokec2 true\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3     \}\cb1 \
\cb3     \cf2 \strokec2 if\cf5 \strokec5 (d)\{\cb1 \
\cb3         printf(\cf4 \strokec4 "0 %d"\cf5 \strokec5 ,score[mxi]);\cb1 \
\cb3     \}\cb1 \
\cb3     \cf2 \strokec2 else\cf5 \cb1 \strokec5 \
\cb3     printf(\cf4 \strokec4 "%d %d"\cf5 \strokec5 ,mxi,score[mxi]);\cb1 \
\cb3    \cb1 \
\cb3 \}\cb1 \
}