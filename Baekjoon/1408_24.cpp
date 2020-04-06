#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    if(a*10000+b*100+c>d*10000+e*100+f)
    d+=24;
    int ans_hour=d-a,ans_min=e-b,ans_sec=f-c;
    if(ans_sec<0){
        ans_sec+=60;
        ans_min--;
    }
    if(ans_min<0){
        ans_min+=60;
        ans_hour--;
    }
    if(ans_hour<10)
    printf("0");
    printf("%d:",ans_hour);
    if(ans_min<10)
    printf("0");
    printf("%d:",ans_min);
    if(ans_sec<10)
    printf("0");
    printf("%d",ans_sec);
}