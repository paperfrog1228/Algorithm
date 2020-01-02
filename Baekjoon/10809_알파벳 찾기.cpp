#include<string.h>
#include<iostream>
int main(void)
{
   char input[101];
   int alpabet[26];
   std::cin.getline(input,101);
  for(int i=0;i<=25;i++)
  alpabet[i]=-1;
  for(int i =0;i<=strlen(input)-1;i++)
    if(alpabet[(int)input[i]-97]==-1)
    alpabet[(int)input[i]-97]=i;
  for(int i=0;i<=25;i++)
  std::cout<<alpabet[i]<<" ";
}