#include<stdio.h>
int n,m,max1=0,max2=0;
char map[104][104];
bool Horizon(){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(map[i][j]=='#')
                cnt++;
            if(cnt>max1)
                max1=cnt;
        }
        if(cnt==max1-1)
            return true;
    }
    return false;
}
bool Vertical(){
    for(int j=0;j<m;j++){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(map[i][j]=='#')
                cnt++;
            if(cnt>max2)
                max2=cnt;
        }
        if(cnt==max2-1)
            return true;
    }
    return false;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%s",map[i]);
    if(Horizon()){
        printf("DOWN");
        return 0;
    }
    if(Horizon())
        printf("UP");
    if(Vertical()){
        printf("RIGHT");
        return 0;
    }
    if(Vertical())
        printf("LEFT");
}