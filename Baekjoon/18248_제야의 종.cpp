#include<stdio.h>
int n,m,a[1004][104];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++){
        bool b,c;
        b=c=false;
        for(int k=1;k<=m;k++){
            if(a[i][k]==0&&a[j][k]==1) b=true;
            if(a[i][k]==1&&a[j][k]==0) c=true;
        }
        if(b&&c){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}