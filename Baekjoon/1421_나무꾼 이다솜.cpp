#include<iostream>
int n,c,w,t[55];
long long ans;
int main(){
    scanf("%d %d %d",&n,&c,&w);
    for(int i=1;i<=n;i++) scanf("%d",&t[i]);
    for(int i=1;i<=10000;i++){
        long long sum=0;
        for (int j=1;j<=n;j++){
            if(t[j]<i) continue;
            int cut=t[j]/i;
            if(t[j]%i==0) cut--;
            cut*=c;
            int tmp=((t[j]/i)*i*w-cut);
            if(tmp>0) sum+=tmp;
        }
        if(sum>ans) ans=sum;
    }
    printf("%lld",ans);
}