{\rtf1\ansi\ansicpg949\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
#include <string>\
#include <map>\
using namespace std;\
int t,n;\
int main()\{\
    cin>>t;\
    while(t--)\{\
        string open1[1010]; \
		string open2[1010]; \
		string plain[1010];\
		string crypto[1010];\
        map<string,int> pos;\
		map<int,int> mp; \
        cin>>n;\
        for(int i=0;i<n;i++) \{\
			cin>>open1[i];\
			pos[open1[i]]=i;\
		\}\
        for(int i=0;i<n;i++) \{\
			cin>>open2[i];\
            mp[i]=pos[open2[i]];\
		\}\
        for(int i=0;i<n;i++) \
			cin>>crypto[i];\
        for(int i=0;i<n;i++)\{\
			plain[mp[i]]=crypto[i];\
		\}\
		for (int i=0;i<n;i++) \
            cout<<plain[i]<<" ";\
		cout << '\\n';\
    \}\
\}}