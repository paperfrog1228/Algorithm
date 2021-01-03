#include<stdio.h>
#include<algorithm>
int t,n,min,b[16];
char s[5];
int count(int a){
    int cnt=0;
    while(a>0){cnt+=a&1;a>>=1;}
    return cnt;
}
void comb(int A,int B,int C){
    bool check=true;
    b[A]--,b[B]--,b[C]--;
    if(b[A]<0||b[B]<0||b[C]<0) check=false;
    b[A]++,b[B]++,b[C]++;
    if(!check) return;
    int AB=A^B,AC=A^C,BC=B^C;
    int cnt=count(AB)+count(AC)+count(BC);
    if(min>cnt) min=cnt;
}
void tc(){
    min=9999;
    scanf("%d",&n);
    std::fill_n(b,16,0);
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        int bit=0;
        if(s[0]=='E') bit|=1;
        if(s[1]=='S') bit|=(1<<1);
        if(s[2]=='T') bit|=(1<<2);
        if(s[3]=='J') bit|=(1<<3);
        b[bit]++;
    }
    for(int i=0;i<=15;i++)
    for(int j=0;j<=15;j++)
    for(int k=0;k<=15;k++)
        comb(i,j,k);
    printf("%d\n",min);
}
int main(){
    scanf("%d",&t);
    while(t>0) tc(),t--;
}