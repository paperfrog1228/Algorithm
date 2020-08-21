#include <stdio.h>
int a,b,c;
bool check(){
    if(a>b&&a>c&&a>=b+c)
        return false;
    if(b>a&&b>c&&b>=a+c)
        return false;
    if(c>a&&c>b&&c>=a+b)
        return false;
    return true;
}
int main(){
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        if(!check()){
            printf("Invalid\n");
            continue;
        }
        if(a==b&&b==c)
            printf("Equilateral\n");
        else if(a==b||b==c||a==c)
          printf("Isosceles\n");
        else
          printf("Scalene\n");
    }
}