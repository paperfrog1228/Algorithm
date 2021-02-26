#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int t,l,n;
int main(){
    scanf("%d",&t);
    while(t--){
        int mmax=0,mmin=0;
        scanf("%d %d",&l,&n);
        int ant;
        for(int i=0;i<n;i++){
            scanf("%d",&ant);
            if(ant>l/2){
                if(ant>mmax) mmax=ant;
                if(l-ant>mmin) mmin=l-ant;
            }
            else{
                if(ant>mmin) mmin=ant;
                if(l-ant>mmax) mmax=l-ant;
            }
        }
        printf("%d %d\n",mmin,mmax);
    }
}
