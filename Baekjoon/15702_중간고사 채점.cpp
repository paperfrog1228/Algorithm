#include<stdio.h>
int n,m,q[105],p,s,ans_i=99999999,ans_v;
char a;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&q[i]);
    for(int i=1;i<=m;i++){
        scanf("%d",&p);
        s=0;
        for(int j=1;j<=n;j++){
            scanf(" %1c",&a);
            if(a=='O') s+=q[j];
        }
        if(ans_v==s&&p<ans_i)
            ans_i=p,ans_v=s;
        if(ans_v<s)
            ans_i=p,ans_v=s;
    }
    printf("%d %d",ans_i,ans_v);
}