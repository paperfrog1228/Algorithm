#include<stdio.h>
char a[104],b[104],ans[204],op;
int main(){
    scanf("%s %c %s",a,&op,b);
    int i=0,j=0,max,min;
    while(a[i]!='\0')
    i++;
    while(b[j]!='\0')
    j++;    
    i>j?(max=i,min=j):(max=j,min=i);
    if(op=='+'){
        if(i==j){
            printf("2");
            for(int k=1;k<=i-1;k++)
                printf("0");
            return 0;
        }
        printf("1");    
        for(int k=1;k<max;k++){
            if(k==(max-min))
            printf("1");
            else printf("0");
        }
    }
    else{
        printf("1");
        for(int k=1;k<=i+j-2;k++)
        printf("0");
    }
}