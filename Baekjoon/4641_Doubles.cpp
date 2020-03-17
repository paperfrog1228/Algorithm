#include<stdio.h>
int arr[105];
int main(){
    int input,ans;
    while(1){
        ans=0;
        for(int i=0;i<=100;i++)
            arr[i]=0;
        while(1){
            scanf("%d",&input);
            if(input==-1)
                return 0;
            if(input==0)
                break;
            arr[input]=1;
        }
        for(int i=1;i<=100;i++)
            if(arr[i])
            if(i*2<=100)
            if(arr[i*2])
            ans++;
        printf("%d\n",ans);
    }
}