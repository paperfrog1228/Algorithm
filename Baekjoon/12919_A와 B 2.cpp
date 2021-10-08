#include<stdio.h>
#include<map>
using namespace std;
struct Robot{int x;int y;char dir;};
map<int,Robot> robots;
int a,b,n,m;
char dirs[4]={'N','E','S','W'};
char turn(char rr,char now,int iter){
    int n=0;
    for(int i=0;i<4;i++)
        if(now==dirs[i])
            n=i;
    for(int i=1;i<=iter;i++){
        if(rr=='R') n++;
        else n--;
        if(n== 4) n=0;
        if(n==-1) n=3;
    }
    return dirs[n];
}
int main(){
    scanf("%d %d %d %d",&a,&b,&n,&m);
    for(int i=1;i<=n;i++){
        Robot robot;
        scanf("%d %d %c",&robot.x,&robot.y,&robot.dir);
        robots[i]=robot;
    }
    int num,iter;
    char op;
    for(int i=1;i<=m;i++){
        scanf("%d %c %d",&num,&op,&iter);
        Robot robot=robots[num];
        if(op=='F'){
            for(int j=1;j<=iter;j++){
                if(robot.dir=='N')
                    robot.y++;
                if(robot.dir=='E')
                    robot.x++;
                if(robot.dir=='W')
                    robot.x--;
                if(robot.dir=='S')
                    robot.y--;
                if(robot.x==0||robot.y==0||robot.x>a||robot.y>b){
                    printf("Robot %d crashes into the wall",num);
                    return 0;
                }
                for(auto m:robots){
                    if(robot.x==m.second.x&&robot.y==m.second.y){
                        printf("Robot %d crashes into robot %d",num,m.first);
                        return 0;
                    }
                }
            }
        }
        else 
            robot.dir=turn(op,robot.dir,iter);
        robots[num]=robot;
    }
    printf("OK");
}