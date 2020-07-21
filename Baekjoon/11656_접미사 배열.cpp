#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
struct str{char s[1004];};
std::vector<str> v;
char s[1004];
bool cmp(const str &s1,const str &s2){
    if(strcmp(s1.s,s2.s)<0)
        return true;
    return false;
}
int main(){
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0'){
        str str={};
        int j=i,k=0;
        while(s[j]!='\0'){
            str.s[k]=s[j];
            j++;
            k++;
        }
        v.push_back(str);
        i++;
    }
    std::sort(v.begin(),v.end(),cmp);
    for(int x=0;x<v.size();x++)
    printf("%s\n",v[x].s);
}