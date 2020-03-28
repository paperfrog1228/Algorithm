#include<stdio.h>
#include<iostream>
using namespace std;
char c[30];
int i,j;
void Print(){
    for(int i=j-1;i>=0;i--)
        printf("%c",c[i]);
    printf(" ");
    j=0;
}
void TestCase(){
    string s;
    getline(cin,s);
    i=0;
    j=0;
    while(1){
        if(s[i]=='\0'){
            Print();
            break;
        }
        else if(s[i]==' ')
            Print();
        else{
            c[j]=s[i];
            j++;
        }
        i++;
    }
}
int main(){
    int t;
    scanf("%d ",&t);
    for(int i=1;i<=t;i++){
        TestCase();
        printf("\n");
    }
}