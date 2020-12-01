#include<stdio.h>
#include<deque>
std::deque<char> d;
int n,k,t;
char s[500004];
int main(){
    scanf("%d %d %s",&n,&k,s),t=k;
    for(int i=0;i<n;i++){
        while(!d.empty()&&d.back()<s[i]&&k>0){
            d.pop_back();
            k--;
        }
        d.push_back(s[i]);
    }
    for(int i=0;i<n-t;i++)
    printf("%c",d[i]);
}