#include<stdio.h>
struct o{int i;bool s;};
void TestCase(){
    int n,m;
    o arr[10005];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].i);
        arr[i].s=false;
    }
    arr[m].s=true;
    int cnt=1;
    int i=0,end=n;
    while(1){
        int priority=arr[i].i;
        bool flag=true;
        for(int j=i+1;j<end;j++){
            if(priority<arr[j].i){
                flag=false;
                break;
            }
        }
        if(flag){
            if(arr[i].s){
                printf("%d\n",cnt);
                return;
            }
            cnt++;
        }
        else{
        arr[end++]=arr[i];
        }
        i++;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}