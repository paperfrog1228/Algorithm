#include<stdio.h>
int n,t,q1[104],q2[104],q1_i,q2_i,a[105][55],cnt,ans[105];
int Q1front(){
    int ret=q1[q1_i];
    q1_i++;
    if(q1_i>n)
    q1_i=1;
    return ret;
}
int Q2front(){
    int ret=q2[q2_i];
    q2_i++;
    if(q2_i>n)
    q2_i=1;
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&q1[i]);
    for(int i=1;i<=n;i++)
        if(q1[i]==1)
            q2[n+1-i]=3;
        else if(q1[i]==2)
            q2[n+1-i]=4;
        else if(q1[i]==3)
            q2[n+1-i]=1;
        else if(q1[i]==4)
            q2[n+1-i]=2;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(int i=1;i<=t;i++){
        for(int j=1;j<=n;j++){
            if(a[i][1]==q1[j]){
                bool flag=true;
                q1_i=j;
                for(int k=1;k<=n;k++)
                    if(a[i][k]!=Q1front()){
                        flag=false;
                        break;
                    }
                if(flag){
                    ans[i]=1;
                    cnt++;
                    break;
                }
            }
            if(a[i][1]==q2[j]){
                bool flag=true;
                q2_i=j;
                for(int k=1;k<=n;k++)
                    if(a[i][k]!=Q2front()){
                        flag=false;
                        break;
                    }
                if(flag){
                    ans[i]=1;
                    cnt++;
                    break;
                }
            }
        }
    }
    printf("%d\n",cnt);
    for(int i=1;i<=t;i++)
    if(ans[i]){
        for(int j=1;j<=n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}