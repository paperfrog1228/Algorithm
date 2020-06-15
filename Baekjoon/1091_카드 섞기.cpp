#include <stdio.h>
int n,p[50],c[50],s[50],t[50],cnt;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
        c[i]=i;
    }
    bool check;
    for(int k=0;k<=200000;k++){
        check=true;
        for(int i=0;i<n;i++){
            if(p[c[i]]%3!=i%3){
                check=false;
                break;
            }
        }
        if(check){
            printf("%d",cnt);
            return 0;
        }
        for(int i=0;i<n;i++)
            t[i]=c[i];
        for(int i=0;i<n;i++)
            c[s[i]]=t[i];
        cnt++;
    }
    printf("-1");
}