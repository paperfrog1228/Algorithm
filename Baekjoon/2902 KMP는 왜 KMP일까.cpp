#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	
	char cInput[101]={0,};
	char cOutput[101]={0,};
	cin >> cInput;
	cout << cInput[0];
	int j = 0;
	for(unsigned int i =1 ;i <strlen(cInput);i++)
	{
		if(cInput[i]=='-')
		{
			cOutput[j]=cInput[i+1];
			j++;
		}
	}

	for(unsigned int i =0 ;i <strlen(cOutput);i++)
	{
		cout<<cOutput[i];		
	}
	

  return 0;
}


