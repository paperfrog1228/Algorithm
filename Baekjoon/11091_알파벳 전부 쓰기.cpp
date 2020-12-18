#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n;
string s;
int main(){
    scanf("%d\n",&n);
    while(n>0){
        getline(cin,s);
        int a[28];
        vector<char> v;
        for(int i=0;i<=26;i++) a[i]=0;
        for(int i=0;i<s.length();i++){
            if('a'<=s[i]&&s[i]<='z')
                a[s[i]-'a']++;
            if('A'<=s[i]&&s[i]<='Z')
                a[s[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        if(a[i]==0) v.push_back('a'+i);

        if(v.size()==0)
        printf("pangram\n");
        else {
            printf("missing ");
            for(int i=0;i<v.size();i++)
            printf("%c",v[i]);
            printf("\n");
        }
        n--;
    }
}