#include<stdio.h>
int main(){
    int n,tn=0,m,ans=0,temp;
    bool flag=false;
    scanf("%d %d",&n,&m);
    tn=n;
    while(n%10!=4&&n%10!=7){ 
        n++;
        tn=n;
    }
    while(tn<=m){
        temp=tn;
        flag=true;
        while(temp>0){
            if(temp%10!=4&&temp%10!=7){
                flag=false;
                break;
            }
            temp/=10;
        }
        if(flag)
            ans++;
        
        if(tn%10==4)
        tn+=3;
        else
        tn+=7;
    }
    printf("%d",ans);
}
//이거 어케 맞았노