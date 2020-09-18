#include<stdio.h>
#include<string>
using namespace std;
int n,l,r,a[101],t[101];
string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string Get(int n){
  string ret="";
  if(n>=10)
  ret=s[n/10];
  ret.append(s[n%10]);
  return ret;
}
void Merge(int l,int m,int r){
  int i=l,j=m+1,k=l;
  while(i<=m&&j<=r){
    string s1=Get(a[i]),s2=Get(a[j]);
    if(s1.compare(s2)<0)
    t[k++]=a[i++];
    else
    t[k++]=a[j++];

  }
  while(i<=m)
  t[k++]=a[i++];
  while(j<=r)
  t[k++]=a[j++];
  for(int x=l;x<=r;x++)
  a[x]=t[x];
}
void Mergesort(int l,int r){
  if(r<=l)
  return;
  int m=(l+r)/2;
  Mergesort(l,m);
  Mergesort(m+1,r);
  Merge(l,m,r);
}
int main(){
  scanf("%d %d",&l,&r); 
  for(int i=0;i<=r-l;i++)
    a[i]=i+l;
  Mergesort(0,r-l);
  for(int i=1;i<=r-l+1;i++){
  printf("%d ",a[i-1]);
  if(i%10==0&&i>=10)
  printf("\n");
  }
}