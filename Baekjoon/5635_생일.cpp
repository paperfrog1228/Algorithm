#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct S{string name;int day;int monty;int year;};
bool Compare(S a,S b){
    if(a.year<b.year)
        return 1;
    else if(a.year>b.year)
        return 0;
    else{
        if(a.monty<b.monty)
        return 1;
        else if(a.monty>b.monty)
        return 0;
        else{
            if(a.day<b.day)
            return 1;
            else 
            return 0;
        }
    }
    return 0;
}
int n;
int main(){
    S student[102];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>student[i].name;
        scanf("%d %d %d",&student[i].day,&student[i].monty,&student[i].year);
    }
    sort(student,student+n,Compare);
    cout<<student[n-1].name<<endl;
    cout<<student[0].name<<endl;
}