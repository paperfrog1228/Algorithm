#include<stdio.h>
#include<algorithm>
using namespace std;
struct Student{
    int i;
    int j;
    int score;
};
Student student[101],gold,silver,bronze;
int region[102],n;
bool Compare(Student a,Student b){
    return a.score>b.score;
}
int main(){
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
        scanf("%d %d %d",&student[k].i,&student[k].j,&student[k].score);
    sort(student+1,student+n+1,Compare);
    int i=1,temp=1;
    while(temp<=3){
        if(region[student[i].i]<2){
            printf("%d %d\n",student[i].i,student[i].j);
            region[student[i].i]++;
            temp++;
        }
        i++;
    }
}