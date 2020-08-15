#include<stdio.h>
char s1[1004],s2[1004];
int t;
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a1[27]={0,},a2[27]={0,},j=0,k=0;
        scanf("%s %s",s1,s2);
        while(s1[j]!='\0'){
            a1[s1[j]-'a']++;
            j++;
        }
        while(s2[k]!='\0'){
            a2[s2[k]-'a']++;
            k++;
        }
        bool ans=true;
        for(int l=0;l<26;l++){
            if(a1[l]!=a2[l]){
                ans=false;
                break;
            }
        }
        if(ans)
        printf("Possible\n");
        else
        printf("Impossible\n");
    }
}