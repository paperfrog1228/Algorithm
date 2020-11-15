#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
    while(1){
        getline(cin,s);
        if(s=="END") break;
        int i=s.size()-1;
        while(i>=0){
            printf("%c",s[i]);
            i--;
        }
        printf("\n");
    }
}