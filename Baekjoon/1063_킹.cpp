#include<stdio.h>
#include<string.h>
struct pos{int x;int y;};
pos king,stone;
pos d[8]={{1,0},{-1,0},{0,-1},{0,1},{1,1},{-1,1},{1,-1},{-1,-1}};
char dir[8][4]={"R","L","B","T","RT","LT","RB","LB"};
void Move(int i){
    int temp_x=king.x;
    int temp_y=king.y;
    int temp2_x=stone.x;
    int temp2_y=stone.y;
    king.x+=d[i].x;
    king.y+=d[i].y;
    if(king.x==stone.x&&king.y==stone.y){
        stone.x+=d[i].x;
        stone.y+=d[i].y;
    }
    if(king.x<1||stone.x<1||king.y<1||stone.y<1||
       king.x>8||stone.x>8||king.y>8||stone.y>8){
           king.x=temp_x;
           king.y=temp_y;
           stone.x=temp2_x;
           stone.y=temp2_y;
    }
}
int main(){
    char a,b;
    int x,y,n;
    scanf("%c%d %c%d %d",&a,&king.y,&b,&stone.y,&n);
    king.x=a-64,stone.x=b-64;
    for(int i=1;i<=n;i++){
        char temp[4];
        scanf("%s",temp);
        for(int j=0;j<8;j++){
            if(strcmp(dir[j],temp)==0){
                Move(j);
            }
        }
    }
    printf("%c%d\n%c%d",king.x+64,king.y,stone.x+64,stone.y);
}