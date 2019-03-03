#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int a[10]={0,};
cin >> s;
for(int i=0;i<s.length();i++){
	a[(int)s[i]-48]++;
}
a[6]+=a[9];
if(a[6]%2==1) a[6]=a[6]/2+1;
else a[6]=a[6]/2;
a[9]=0;
int max=0;
for(int i=0;i<=9;i++)
if(max<a[i])
	max=a[i];
	cout<<max;
return 0;
}
