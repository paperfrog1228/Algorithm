#include<string.h>
#include<iostream>
int main(void)
{
   int ans=1;
   bool is_space=true;
   char input[1000001];
   std::cin.getline(input,1000001);
  
   for(int i =0;i<=strlen(input)-1;i++)
   {
     if(input[i]==' ')
       ans++;
    else is_space=false;
   }
  if(input[0]==' ')
  ans--;
  if(input[strlen(input)-1]==' ')
   ans--;

 if(is_space)
 std::cout<<"0";
 else
 std::cout<<ans;
     return 0;
}