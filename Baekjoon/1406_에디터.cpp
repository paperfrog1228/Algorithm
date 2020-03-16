#include <stdio.h>
#include <list>
using namespace std;
int m;
char s[600003],input,temp;
list<char> l;
void Print(){
    for(list<char>::iterator itr=l.begin();itr!=l.end();++itr)
    printf("%c",*itr);
}
int main(){
    while(1){
        scanf("%c",&temp);
        if(temp=='\n')
        break;
        l.push_back(temp);
    }
    list<char>::iterator itr=l.end();
    list<char>::iterator temp_itr;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%*[ \n]%c",&input);
        if(input=='L')
            if(!(itr==l.begin()))
                --itr;
        if(input=='D')
            if(!(itr==l.end()))
                ++itr;
        if(input=='B')
            if(!(itr==l.begin())){
                temp_itr=itr;
                l.erase(--temp_itr);
            }
        if(input=='P'){
            scanf("%*[ \n]%c",&temp);
            l.insert(itr,temp);
        }
    }
    Print();
}