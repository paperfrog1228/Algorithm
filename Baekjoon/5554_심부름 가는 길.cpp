#include<bits/stdc++.h>
int a,s;
int main(){
    for(int i=0;i<4;i++) scanf("%d",&a),s+=a;
    printf("%d\n%d",s/60,s%60);
}
