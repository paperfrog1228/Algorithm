#include<stdio.h>
char c[100];
int a[100],ans,temp;
bool minus;
int main(){
    int i=0,j=0;
    while(c[j]!='\n'){
        scanf("%d",&a[++i]);
            temp+=a[i];
        scanf("%c",&c[++j]);
        if(c[j]=='-'){
            if(minus)
                ans-=temp;
            else ans+=temp;
            minus=true;
            temp=0;
        }
    }
    if(minus)
        ans-=temp;
    else
        ans+=temp;
    printf("%d",ans);
}