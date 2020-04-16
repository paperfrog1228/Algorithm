#include<stdio.h>
#include<iostream>
using namespace std;
string s;
int main(){
    while(1){
        getline(cin,s);
        int i=0,cnt=0;
        if(s[0]=='#')
            break;
        while(s[i]!='\0'){
            if(s[i]=='a'||s[i]=='A'||
               s[i]=='e'||s[i]=='E'||
               s[i]=='i'||s[i]=='I'||
               s[i]=='o'||s[i]=='O'||
               s[i]=='u'||s[i]=='U'
            )
            cnt++;
            i++;
        }
        printf("%d\n",cnt);
    }
}