#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

vector<int> makeTable(string pattern){
	int patternSize = pattern.size();
	vector<int> table(patternSize, 0);
	int j =0;
	for(int i = 1; i< patternSize; i++){
		while(j >0 && pattern[i] != pattern[j]){
			j = table[j-1];
		}
		if(pattern[i] == pattern[j])
			table[i] =++j;
		}
	return table;
}


int main(void) {
	string t, pattern;

	getline(cin, t); 
	getline(cin, pattern);
	vector<int> ans;
	vector<int> table = makeTable(pattern);
	int j =0;
	for(int i = 0 ; i < t.size(); i++){
		while(j>0 && t[i] != pattern[j])
			j = table[j-1];
		if(t[i]==pattern[j]){
			if(j==pattern.size()-1){
				ans.push_back(i-pattern.size()+1);
				printf("%d\n",i);
				printf("%d",pattern.size());
				j = table[j];
			}
			else j++;
		}
	}

	printf("%d\n",ans.size());
	for(int i = 0; i < ans.size(); i++)
		printf("sex:%d ",ans[i]);
	system("pause > nul");

	return 0;
	
}
