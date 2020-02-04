#include<stdio.h>
int k,n,line[10003];
long long highLine=0,ans=0;
void Cut(long long left,long long right){
    if(right-left<0)
        return;
    long long mid=(left+right)/2;
    long long cnt=0;
    for(int i=1;i<=k;i++){
        cnt+=(line[i]/mid);
    }
    if(cnt<n)
        Cut(left,mid-1);
    else{
        if(ans<mid)
            ans=mid;
        Cut(mid+1,right);
    }    
}
int main(){
  scanf("%d %d",&k,&n);;
  for(int i=1;i<=k;i++){
    scanf("%d",&line[i]);
    if(line[i]>highLine)
        highLine=line[i];
  }
  Cut(1,highLine);
  printf("%lld",ans);
}