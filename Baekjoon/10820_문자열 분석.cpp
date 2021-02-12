#include <iostream>
#include <string>
using namespace std;
string s;
int a,b,c,d;
int main(){
    while(getline(cin,s)){
        a=b=c=d=0;
        for(int i=0;i<s.size();i++){
            if('a'<=s[i]&&s[i]<='z') a++;
            if('A'<=s[i]&&s[i]<='Z') b++;
            if('0'<=s[i]&&s[i]<='9') c++;
            if(s[i]==' ') d++;
        }
        printf("%d %d %d %d\n",a,b,c,d);
    }
}