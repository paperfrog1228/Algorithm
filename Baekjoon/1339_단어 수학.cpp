#include <iostream>
#include <string>
int n,w[28],ans;
std::string s;
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    std::cin>>s;
    int l=s.length(),j=l-1;
    while(j>=0){
      int ten=1;
      for(int k=1;k<l-j;k++)
        ten*=10;
      w[s[j]-'A']+=ten;
      j--;
    }
  }
  for(int i=9;i>=1;i--){
    int mmax=0,maxi=0;
    for(int j=0;j<26;j++)
      if(w[j]>mmax)
        mmax=w[j],maxi=j;
    ans+=mmax*i,w[maxi]=-1;
  }
  printf("%d",ans);  
}