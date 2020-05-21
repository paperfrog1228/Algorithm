#include<stdio.h>
#include <math.h>
#define INF 2147483647
#define Dist(x1,y1,x2,y2) sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
int n,visit[104];
double w[104][104],dist[104];
struct Star{double x;double y;};
Star s[104];
int main(){
    scanf("%d",&n);
    double x,y,ans=0;
    for(int i=1;i<=n;i++)
    scanf("%lf %lf",&s[i].x,&s[i].y);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(w[i][j]!=0)
            continue;
        if(i==j)
        w[i][j]=INF;
        double d=Dist(s[i].x,s[i].y,s[j].x,s[j].y);
        w[i][j]=d;
        w[j][i]=d;
    }
    for(int i=2;i<=n;i++)
    dist[i]=w[1][i];
    visit[1]=1;
    for(int i=1;i<n;i++){
        double min=INF;
        int min_v=0;
        for(int j=1;j<=n;j++){
            if(visit[j])
                continue;
            if(dist[j]<min){
                min=dist[j];
                min_v=j;
            }
        }
        ans+=min;
        visit[min_v]=1;
        for(int j=1;j<=n;j++){
            if(visit[j])
            continue;
            if(w[min_v][j]<dist[j])
            dist[j]=w[min_v][j];
        }
    }
    printf("%.2lf",ans);
}