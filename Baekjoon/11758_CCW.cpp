#include<stdio.h>
#include <float.h> 
#include<math.h>
struct point_i{double x,y; 
	point_i(){x=y=0;};
	point_i(double _x,double _y) : x(_x), y(_y) {}};
struct vec{double x, y;
	vec(double _x,double _y):x(_x),y(_y){}};
double cross(vec a,vec b){return a.x*b.y - a.y*b.x;}
vec toVec(point_i a,point_i b){
    return vec(b.x - a.x, b.y - a.y);}
bool ccw(point_i p,point_i q,point_i r){
    return cross(toVec(p,q),toVec(p,r))>0;
}
bool collinear(point_i p,point_i q,point_i r){
    return fabs(cross(toVec(p,q),toVec(p,r)))<FLT_EPSILON;
}
point_i p1,p2,p3;
int main(){
    scanf("%lf %lf %lf %lf %lf %lf",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y);
    if(collinear(p1,p2,p3))
    printf("0");
    else if(ccw(p1,p2,p3))
    printf("1");
    else
    printf("-1");
}