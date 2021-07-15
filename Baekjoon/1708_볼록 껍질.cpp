{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
#include<algorithm>\
#include<vector>\
#define ll long long\
using namespace std;\
struct point \{ll x; ll y;\};\
int n;\
vector<point> v,s;\
point pivot;\
long long ccw(point a, point b, point c) \{ \
	return a.x * b.y + b.x * c.y + c.x * a.y - (b.x * a.y + c.x * b.y + a.x * c.y);\
\}\
bool cmp(point a, point b)\{\
	ll chk=ccw(pivot,a,b);\
	if(chk!=0) return chk>0;\
	return (a.x+a.y)<(b.x+b.y);\
\}\
void CH(vector<point> P)\{\
	int p0=0;\
	for(int i=1;i<n;i++) \
		if((P[i].y<P[p0].y)||(P[i].y==P[p0].y&&P[i].x<P[p0].x)) p0=i;\
	point temp=P[0]; P[0]=P[p0]; P[p0]=temp;\
	pivot=P[0];\
	sort(++P.begin(),P.end(),cmp);\
    s.push_back(P[n-1]);s.push_back(P[0]); s.push_back(P[1]);\
	int i=2;\
	while(i<n)\{\
		int j=s.size()-1;\
		if(ccw(s[j-1],s[j],P[i])>0) s.push_back(P[i++]);\
		else s.pop_back();\
	\}\
\}\
int main()\{\
    scanf("%d",&n);\
    v.resize(n);\
    for(int i=0;i<n;i++) scanf("%lld %lld",&v[i].x,&v[i].y);\
    CH(v);\
    printf("%d\\n",s.size()-1);\
\}}