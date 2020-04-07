#include<stdio.h>
int time[105],ans=0;
int main(){
    int a,b,c,s,e;
    scanf("%d %d %d",&a,&b,&c);
    for(int t=1;t<=3;t++){
        scanf("%d %d",&s,&e);
        for(int i=s;i<e;i++)
        time[i]++;
    }
    for(int i=1;i<=100;i++){
        if(time[i]==1)
        ans+=a;
        if(time[i]==2)
        ans+=b*2;
        if(time[i]==3)
        ans+=c*3;
    }
    printf("%d",ans);
}