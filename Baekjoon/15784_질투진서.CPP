#include<iostream>
int mp[1010][1010],n,r,c,m;
int main(){
    scanf("%d %d %d",&n,&r,&c);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&mp[i][j]);
    m=mp[r][c];
    for(int i=1;i<=n;i++)
        if(mp[r][i]>m){
            printf("ANGRY");
            return 0;
        }
      for(int i=1;i<=n;i++)
        if(mp[i][c]>m){
            printf("ANGRY");
            return 0;
        }   
     printf("HAPPY");    
}