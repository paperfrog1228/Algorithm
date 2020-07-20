#include<stdio.h>
int a[3][3],sum;
int Check(){
    //↘
    bool ans=true;
    for(int i=0;i<3;i++){
        if(a[i][i]==0)
            ans=false;
        sum+=a[i][i];
    }
    if(ans)
        return sum;
    //↙
    ans=true;sum=0;
    for(int i=0;i<3;i++){
        if(a[i][2-i]==0)
            ans=false;
        sum+=a[i][2-i];
    }
    if(ans)
        return sum;
    //→
    for(int i=0;i<3;i++){
        ans=true;sum=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==0)
                ans=false;
            sum+=a[i][j];
        }
        if(ans)
            return sum;
    }
    //↓
    for(int i=0;i<3;i++){
        ans=true;sum=0;
        for(int j=0;j<3;j++){
            if(a[j][i]==0)
                ans=false;
            sum+=a[j][i];
        }
        if(ans)
            return sum;
    }
    sum=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
        sum+=a[i][j];
    return (sum/2);
}
int main(){
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    int check=Check();
    for(int i=0;i<3;i++){
        int x=0,y=0,cnt=0;
        int temp=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==0){
                cnt++;
                x=i;
                y=j;
            }
            temp+=a[i][j];
        }
        if(cnt!=1)
            continue;
        a[x][y]=check-temp;
    }
    for(int i=0;i<3;i++){
        int x=0,y=0,cnt=0;
        int temp=0;
        for(int j=0;j<3;j++){
            if(a[j][i]==0){
                cnt++;
                x=j;
                y=i;
            }
            temp+=a[j][i];
        }
        if(cnt!=1)
            continue;
        a[x][y]=check-temp;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
} 