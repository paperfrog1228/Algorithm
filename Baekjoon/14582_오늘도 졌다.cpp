#include <stdio.h>
int a[12],b[12];
int main(){
    for(int i=1;i<=9;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=9;i++)
    scanf("%d",&b[i]);
    bool isWin=false,ans=false;
    for(int i=1;i<=9;i++){
        a[11]+=a[i];
        if(a[11]>b[11])
        isWin=true;
        b[11]+=b[i];
        if(a[11]<b[11]&&isWin)
        ans=true;
    }
    if(a[11]<b[11]&&ans)
    printf("Yes");
    else
    printf("No");
}