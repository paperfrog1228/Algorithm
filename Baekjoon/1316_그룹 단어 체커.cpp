#include<stdio.h>
int main(){
    int n,a[26],cnt;
    char s[102];
    scanf("%d",&n);
    cnt=n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<26;j++)
            a[j]=0;
        scanf("%s",s);
        int k=1;
        a[s[0]-97]++;
        while(s[k]!='\0'){
            if(a[s[k]-97]!=0){
                if(s[k]!=s[k-1]){
                    cnt--;
                    break;
                }
            }
            else
            a[s[k]-97]++;
            k++;
        }
    }
    printf("%d\n",cnt);
}