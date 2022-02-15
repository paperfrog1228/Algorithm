{\rtf1\ansi\ansicpg949\cocoartf2578
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue254;\red144\green1\blue18;
\red0\green0\blue0;\red19\green120\blue72;\red252\green76\blue165;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c99608;\cssrgb\c63922\c8235\c8235;
\cssrgb\c0\c0\c0;\cssrgb\c3529\c53333\c35294;\cssrgb\c100000\c41176\c70588;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl420\partightenfactor0

\f0\fs28 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include<\cf4 \strokec4 iostream\cf2 \strokec2 >\cf5 \cb1 \strokec5 \
\cf2 \cb3 \strokec2 using\cf5 \strokec5  \cf2 \strokec2 namespace\cf5 \strokec5  std;\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3 string s;\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf2 \cb3 \strokec2 int\cf5 \strokec5  main()\{\cb1 \
\pard\pardeftab720\sl420\partightenfactor0
\cf5 \cb3     cin>>s;\cb1 \
\cb3     \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  i=\cf6 \strokec6 0\cf5 \strokec5 ;i<s.length();i++)\{\cb1 \
\cb3         \cf2 \strokec2 int\cf5 \strokec5  n=s[i];\cb1 \
\cb3         \cf2 \strokec2 int\cf5 \strokec5  nn=\cf6 \strokec6 0\cf5 \strokec5 ;\cb1 \
\cb3         \cf2 \strokec2 while\cf5 \strokec5 (n>\cf6 \strokec6 0\cf5 \strokec5 )\{\cb1 \
\cb3             nn+=n%\cf6 \strokec6 10\cf5 \strokec5 ;\cb1 \
\cb3             n/=\cf6 \strokec6 10\cf5 \strokec5 ;\cb1 \
\cb3         \}\cb1 \
\cb3         \cf2 \strokec2 for\cf5 \strokec5 (\cf2 \strokec2 int\cf5 \strokec5  j=\cf6 \strokec6 0\cf5 \strokec5 ;j<nn;j++)\cb1 \
\cb3         printf(\cf4 \strokec4 "%c"\cf5 \strokec5 ,s[i]);\cb1 \
\cb3         printf(\cf4 \strokec4 "\cf7 \strokec7 \\n\cf4 \strokec4 "\cf5 \strokec5 );\cb1 \
\cb3     \}\cb1 \
\cb3 \}\cb1 \
}