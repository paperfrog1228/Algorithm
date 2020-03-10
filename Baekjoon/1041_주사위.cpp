#include<stdio.h>
int n,temp,arr[7],max=0;
long long three=3000,two=3000,one=3000;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=6;i++)
    scanf("%d",&arr[i]);

    if(n==1){
        for(int i=1;i<=6;i++){
            if(max<arr[i])
            max=arr[i];
            temp+=arr[i];
        }
        printf("%d",temp-max);
        return 0;
    }

    for(int i=1;i<=6;i++){
        temp=arr[i];
            if(one>temp)
                one=temp;
        for(int j=i+1;j<=6;j++){
            if(j==7-i)//마주보는 면
                continue;
            temp+=arr[j];
            if(two>temp)
                two=temp;
            for(int k=j+1;k<=6;k++){
                if(k==7-i||k==7-j)
                    continue;
                temp+=arr[k];
                if(three>temp)
                three=temp;
                temp-=arr[k];
            }
            temp-=arr[j];
        }
    }
    printf("%lld",three*4+two*(n-2)*4+two*(n-1)*4+one*(n-2)*(n-1)*4+one*(n-2)*(n-2));
}
/////////이걸 이렇게 구하네!////////////
/*
a[0] = MIN(a[0], a[5]);
        a[1] = MIN(a[1], a[4]);
        a[2] = MIN(a[2], a[3]);
        sort(a, a + 3);
        min3 = a[0] + a[1] + a[2];
        min2 = a[0] + a[1];
        min1 = a[0];
*/