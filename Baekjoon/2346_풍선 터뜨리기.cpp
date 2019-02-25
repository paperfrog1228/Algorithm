#include<stdio.h>
#include<list>
using namespace std;
int main(){
int n;
list<pair<int,int>> a;
scanf("%d",&n);
int x;
for(int i=1;i<=n;i++){
	scanf("%d",&x);
	a.push_back({i,x});//first : n번째 풍선 , second: 옮길 수 
}
auto it=a.begin();
for(int i=1;i<n;i++){
	printf("%d ",it->first);
	int move=it->second;
	auto temp=it;

	if(move>0){
		++temp;
		if(temp==a.end())
		temp=a.begin();
		a.erase(it);
	for(int i = 1; i<move;i++){
		++temp;
		if(temp==a.end())
		temp=a.begin();}
		it = temp;
		}
	else if(move<0){
		if(temp==a.begin())
		temp=a.end();
		--temp;
		a.erase(it);
		for(int i = -1;i>move;i--)
		{
		if(temp==a.begin())
		temp=a.end();
		--temp;
		}
		it = temp;
	}
}
printf("%d",it->first);
return 0;
}
