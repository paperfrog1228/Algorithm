#include<string.h>
#include<iostream>
using namespace std;
int main(void)
{
   string input;
   int alpabet[26]={0},max_index=0,max=-1;
   getline(cin,input);
  
  for(int i =0;i<=input.length()-1;i++)
  {
    if((int)input[i]>=97)
    alpabet[(int)input[i]-97]++;
    else
    alpabet[(int)input[i]-65]++;
  }
    
  for(int i=0;i<=25;i++)
  {
    if(max<alpabet[i])
    {
      max=alpabet[i];
      max_index=i;
    }
  }
  for(int i=0;i<=25;i++)
  {
    if(max==alpabet[i]&&i!=max_index)
    {
     std::cout<<"?";
     return 0;
    }
  }
  std::cout<<(char)(max_index+65);
}