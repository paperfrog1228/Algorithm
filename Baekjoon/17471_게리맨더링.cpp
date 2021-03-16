#include<iostream>
#include<vector>
using namespace std;
vector<int> v[12];
int n,people[12],bbit[2],visit[12],all,x,xx,ans=987654321;
int abs(int a,int b){
    if(a-b<0) return(a-b)*-1; return a-b;
}
void check(int num,int bit,int ii){
    if(!(bit&(1<<(ii-1)))||visit[ii])return;
    visit[ii]++;
    bbit[num]|=(1<<(ii-1));
    for(int i=0;i<v[ii].size();i++)
        check(num,bit,v[ii][i]);
}
void dfs(int bit,int ii){
    bit|=(1<<(ii-1));
    int cnt1=0,cnt2=0;
    bool c1=false,c2=false;
    for(int i=1;i<=n;i++) visit[i]=0;
    bbit[0]=bbit[1]=0;
    for(int i=1;i<=n;i++){
        if(bit&(1<<(i-1))) {
            if(!c1){
                check(0,bit,i);
                if(bit==bbit[0]) c1=true;
                else break;
            }
            cnt1+=people[i];
        }
        else {
            if(!c2){
                check(1,all-bit,i);
                if(all-bit==bbit[1]) c2=true;
                else break;
            }
            cnt2+=people[i];
        }
    }
    if(c1&&c2&&ans>abs(cnt1,cnt2))
    ans=abs(cnt1,cnt2);
    for(int i=ii+1;i<=n;i++) dfs(bit,i);
}
int main(){
    scanf("%d",&n);
    all=(1<<n)-1;
    for(int i=1;i<=n;i++) scanf("%d",&people[i]);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            scanf("%d",&xx);
            v[i].push_back(xx);
        }
    }
    for(int i=1;i<=n;i++) dfs(0,i);
    if(ans==987654321) ans=-1;
    printf("%d",ans);
}
