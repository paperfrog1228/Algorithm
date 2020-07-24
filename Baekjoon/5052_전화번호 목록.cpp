#include<stdio.h>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int t, n;
char num[11];
struct Trie { bool t; Trie* c[10]; };
bool Insert(Trie* root,string s){
	Trie *cur=root;
	int size =s.length();
	for(int i=0;i<size;i++){
		int next = s[i]-'0';
		if (cur->c[next] == NULL) 
			cur->c[next] = new Trie();
		cur = cur->c[next];
		if (cur->t&&i<size) return false;
	}
	cur->t = true;
	return true;
}
void Testcase(){
	Trie* root = new Trie();
	vector<string> v;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		if (!Insert(root,v[i])) {
			printf("NO\n");
			return ;
		}
	printf("YES\n");
}
int main(){
	scanf("%d",&t);
	for (int i = 1; i <= t; i++)
		Testcase();
}