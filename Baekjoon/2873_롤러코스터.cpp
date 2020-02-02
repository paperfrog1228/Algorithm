#include<iostream>
#include<stdio.h>
#include<string>
#define FOR(i,n) for(int i=1;i<=n;i++)
using namespace std;
int r,c,arr[1003][1003],minI,minJ,Min,i,j;
string answer;
void Right(){
    while(arr[i][j+1]!=0){
        answer+='R';
        j++;
    }
}
void Left(){
    while(arr[i][j-1]!=0){
        answer+='L';
        j--;
    }
}
void Up(){
    while(arr[i-1][j]!=0){
        answer+='U';
        i--;
    }
}
void Down(){
    while(arr[i+1][j]!=0){
        answer+='D';
        i++;
    }
}
int main(){
    Min=1001;
    i=1,j=1;
    scanf("%d %d",&r,&c);
    FOR(a,r)FOR(b,c){
        scanf("%d",&arr[a][b]);
        if((a+b)%2==1)
        if(Min>arr[a][b]){
            Min=arr[a][b];
            minI=a,minJ=b;
        }
    }
    if(r%2==1){
        while(1){
        Right();
        i++;
        if(arr[i][j]==0){
        cout<<answer<<"\n";
        return 0;
        }
        answer+='D';
        Left();
        i++;
        if(arr[i][j]==0){
        cout<<answer<<"\n";
        return 0;
        }
        answer+='D';
        }
    }
    else if(c%2==1){
        while(1){
        Down();
        j++;
        if(arr[i][j]==0){
            cout<<answer<<"\n";
            return 0;
        }
        answer+='R';
        Up();
        j++;
        if(arr[i][j]==0){
        cout<<answer<<"\n";
        return 0;
        }
        answer+='R';
        }
    }
    else{
        int x=0;
        if(minI%2==0)
        x=minI-1;
        else x=minI;
        while(i<x){
            Right();
            i++;
            answer+='D';
            Left();
            answer+='D';
            i++;
        }
        while(j<minJ){
            if(j%2==1){
            answer+="DR";
            i++;
            }
            else{
            answer+="UR";
            i--;
            }
            j++;
        }        
        while(arr[i][j+1]!=0){
            if(j%2==1){
            answer+="RD";
            i++;
            }
            else{
            answer+="RU";
            i--;
            }
            j++;
        }
        while(1){
        Right();
        i++;
        if(arr[i][j]==0)
        break;
        answer+='D';
        Left();
        i++;
        if(arr[i][j]==0)
        break;
        answer+='D';
        }
}
    cout<<answer<<"\n";
}