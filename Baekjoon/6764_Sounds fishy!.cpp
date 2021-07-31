#include<stdio.h>
int a[4];
bool same=1,rise=1,dive=1;
int main(){
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(int i=1;i<=3;i++) {
        if(a[i-1]<a[i]) same=0,dive=0;
        else if(a[i-1]>a[i]) same=0,rise=0;
        else dive=0,rise=0;
    }
    if(rise) printf("Fish Rising");
    else if(dive) printf("Fish Diving");
    else if(same) printf("Fish At Constant Depth");
    else printf("No Fish");
}
