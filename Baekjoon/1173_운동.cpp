#include <stdio.h>
int N,m,M,T,R,ans,cur,cnt,time;
int main(){
    scanf("%d %d %d %d %d",&N,&m,&M,&T,&R);
    cur=m;
    while(1){
        if(cur+T<=M)
        cur+=T,cnt++;
        else if(cur==m&&cur+T>M){
            printf("-1");
            return 0;
        }
        else cur-=R;
        if(cur<m)
        cur=m;
        time++;
        if(cnt==N){
            printf("%d",time);
            return 0;
        }
    }
}