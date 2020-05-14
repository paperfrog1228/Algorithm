#include<stdio.h>
int a,b,arr[1004],j=1,k=1,ans=0;
int main(){
    scanf("%d %d",&a,&b); 
    while(1){
        for(int i=1;i<=j;i++){
            arr[k]=j;
            if(k>=a)
            ans+=j;
            k++;
            if(k>b){
            printf("%d\n",ans);
            return 0;
            }
        }
        j++;
    }
}