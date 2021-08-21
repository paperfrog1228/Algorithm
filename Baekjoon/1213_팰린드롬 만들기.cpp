#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;
char s[55];
int i,a[30],odd,oddi=-1;
vector<char> v;
int main(){
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
        a[s[i]-'A']++,i++;
    for(int i=0;i<26;i++){
        if(a[i]%2==1) odd++,oddi=i;
    }
    if(odd>1){
        printf("I'm Sorry Hansoo");
        return 0;
    }
    for(int i=0;i<26;i++){
        int cnt=a[i];
        if(oddi==i) cnt--;
        for(int j=1;j<=cnt/2;j++)
        printf("%c",i+'A');
    }
    if(oddi!=-1) printf("%c",oddi+'A');
    for(int i=25;i>=0;i--){
        int cnt=a[i];
        if(oddi==i) cnt--;
        for(int j=1;j<=cnt/2;j++)
        printf("%c",i+'A');
    }
}