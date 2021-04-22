#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t;
char x;
void f(){
    int n=0,a=0,cnt=0,i=0;
    deque<int> d(n);
    char s[100004];
    scanf("%s %d",s,&n);
    scanf(" %1c",&x);
    if(n==0){scanf("%c%c",&x,&x);}
    else{
        for(int i=1;i<=n;i++)
        scanf("%d%c",&a,&x),d.push_back(a);
    }
    while(s[i]!='\0'){
        if(s[i]=='R')
            cnt++;
        else{
            if(d.empty()){
                printf("error\n");
                return;
            }
            if(cnt%2==0) d.pop_front();
            else d.pop_back();
        }
        i++;
    }
    printf("[");
    if(d.empty()) printf("]\n");
    if(cnt%2==0){
        while(!d.empty()){
            int f=d.front();
            printf("%d",f);
            d.pop_front();
            if(!d.empty()) printf(",");
            else{
                printf("]\n");
                return;
            }
        }
    }
    else{
        while(!d.empty()){
            int f=d.back();
            printf("%d",f);
            d.pop_back();
            if(!d.empty()) printf(",");
            else{
                printf("]\n");
                return;
            }
        }
    }
}
int main() {
    scanf("%d",&t);
    while(t--) f();
}

