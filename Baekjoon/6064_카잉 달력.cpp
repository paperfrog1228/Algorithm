#include<stdio.h>
#include<algorithm>
using namespace std;
int m,n,x,y,ans,temp,Max,Min,minyear,maxyear;
void Test(){
    scanf("%d %d %d %d",&m,&n,&x,&y);
    if(min(x,y)==x)
        Min=x,Max=y,minyear=m,maxyear=n;
    else
        Min=y,Max=x,minyear=n,maxyear=m;
    ans=Min,temp=Min;
    while(ans<=m*n){
        if(Max==temp){
            printf("%d\n",ans);
            return;
        }
        temp+=minyear;
        temp=(temp%maxyear);
        if(temp==0)
        temp=maxyear;
        ans+=minyear;
    }
    printf("-1\n");
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        Test();
} 