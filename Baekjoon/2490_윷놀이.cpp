#include<stdio.h>
int main(){
    int tmp,a;
    char ans;
    for(int i=1;i<=3;i++){
        a=1;
        ans='E';
        for(int j=1;j<=4;j++){
            scanf("%d",&tmp);
            if(tmp)
            a*=2;
        }
        if(a==8)
        ans='A';
        if(a==4)
        ans='B';
        if(a==2)
        ans='C';
        if(a==1)
        ans='D';
        printf("%c\n",ans);
    }   
}