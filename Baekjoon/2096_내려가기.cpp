#include<stdio.h>
int main(){
int n,max[3]={0,0,0},min[3]={0,0,0},a[2][3],ans1,ans2;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);//a[1][x]-> max , a[0][x]-> min
  a[1][0]=(max[0]>max[1]?max[0]:max[1])+a[0][0];
  a[1][2]=(max[1]>max[2]?max[1]:max[2])+a[0][2];
  if(max[0]>=max[1]&&max[0]>=max[2])
  a[1][1]=max[0]+a[0][1];
  else if(max[1]>=max[0]&&max[1]>=max[2])
  a[1][1]=max[1]+a[0][1];
  else if(max[2]>=max[0]&&max[2]>=max[1])
  a[1][1]=max[2]+a[0][1];

  a[0][0]=(min[0]<min[1]?min[0]:min[1])+a[0][0];
  a[0][2]=(min[1]<min[2]?min[1]:min[2])+a[0][2];
  if(min[0]<=min[1]&&min[0]<=min[2])
  a[0][1]=min[0]+a[0][1];
  else if(min[1]<=min[0]&&min[1]<=min[2])
  a[0][1]=min[1]+a[0][1];
  else if(min[2]<=min[0]&&min[2]<=min[1])
  a[0][1]=min[2]+a[0][1];
  
  max[0]=a[1][0]; max[1]=a[1][1]; max[2]=a[1][2];
  min[0]=a[0][0]; min[1]=a[0][1]; min[2]=a[0][2]; 
}
if(max[0]>=max[1]&&max[0]>=max[2])
ans1=max[0];
else if(max[1]>=max[0]&&max[1]>=max[2])
ans1=max[1];
else if(max[2]>=max[0]&&max[2]>=max[1])
ans1=max[2];
if(min[0]<=min[1]&&min[0]<=min[2])
ans2=min[0];
else if(min[1]<=min[0]&&min[1]<=min[2])
ans2=min[1];
else if(min[2]<=min[1]&&min[2]<=min[0])
ans2=min[2];

printf("%d %d",ans1,ans2);

return 0;
}
