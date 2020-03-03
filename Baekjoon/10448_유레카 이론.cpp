#include<stdio.h>
int t[60],k;
bool Check(int i,int sum,int cnt){
    cnt++;
    sum+=t[i];
    if(cnt==3){
        if(sum==k)
            return true;
        return false; 
    }
    for(int j=i;k>t[j];j++){
        if(Check(j,sum,cnt))
            return true;
    }
    return false;
}
int main(){
    for(int i=1;i<=59;i++)
        t[i]=t[i-1]+i;
    int testcase;
    bool ans=false;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++){
        scanf("%d",&k);
        for(int j=1;k>t[j];j++){
            if(Check(j,0,0)){
                ans=true;
                break;
            }
        }
        if(ans)
        printf("1\n");
        else printf("0\n");
        ans=false;
    }

}