#include <stdio.h>
int a[30]={1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0};
///////////a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
int n,k;
char s[51][30];
int max=0;
void Check(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        int j=0;
        bool flag=true;
        while(s[i][j]!='\0'){
            if(a[s[i][j]-'a']==0){
                flag=false;
                break;
            }
            j++;
        }
        if(flag)
        cnt++;
    }
    if(cnt>max)
    max=cnt;
}
void DFS(int i,int cnt){
    a[i]=1;
    if(cnt==k){
        Check();
        a[i]=0;
        return;
    }
    for(int j=i+1;j<26;j++){
        if(a[j]==0)
        DFS(j,cnt+1);
    }
    a[i]=0;
}
int main(){
    scanf("%d %d",&n,&k);
    if(k<5){
        printf("0");
        return 0;
    }
    for(int i=1;i<=n;i++)
    scanf("%s",s[i]);
    Check();
    for(int i=0;i<26;i++){
        if(a[i]==0)
        DFS(i,6);
    }
    printf("%d",max);
}