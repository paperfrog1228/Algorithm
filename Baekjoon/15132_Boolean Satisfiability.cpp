#include<stdio.h>
#include<vector>
#include<math.h>
char s[4000];
int check[500];
bool nt=false,two=false;
std::vector<int> v;
int i;
long long ans;
int main(){
	scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]=='~') nt=1;
        else if(s[i]!='|'){
            int index;
            if('a'<=s[i]&&s[i]<='z')
                index=s[i]-'a';
            if('A'<=s[i]&&s[i]<='Z')
                index=s[i]-'A'+26;
            if(!check[100+index]&&!check[index])
                v.push_back(index);
            if(nt) check[100+index]++;
            else check[index]++;
            nt=0;
        } 
        i++;
    }
    for(auto n:v)
        if(check[n]&&check[100+n]) two=true;
    if(v.size()==1&&!two){
        printf("1");
        return 0;
    }
    ans=std::pow(2,v.size());
    if(!two) ans--;
    printf("%lld",ans);
}
