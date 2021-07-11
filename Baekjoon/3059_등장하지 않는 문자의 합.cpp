#include<bits/stdc++.h>
int t,a[100];
char s[1010];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int ans=0,i=0;
        while(s[i]!='\0'){
            a[s[i]]++;
            i++;
        }
        for(int k=65;k<=90;k++){
            if(a[k]==0) ans+=k;
            a[k]=0;
        }
        printf("%d\n",ans);
    }
}