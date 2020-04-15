#include<stdio.h>
int n,r,c;
char map[110][110];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%s",map[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        int k=0,cnt=0;
        while(map[i][j+k]=='.'&&j+k<n){
            cnt++;
            k++;
        }
        if(cnt>1){
            r++;
            j+=k;
        }
    }
    for(int j=0;j<n;j++)
    for(int i=0;i<n;i++){
        int k=0,cnt=0;
        while(map[i+k][j]=='.'&&i+k<n){
            cnt++;
            k++;
        }
        if(cnt>1){
            c++;
            i+=k;
        }
    }
    printf("%d %d",r,c);
}