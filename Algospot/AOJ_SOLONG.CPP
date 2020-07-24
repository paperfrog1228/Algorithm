#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
const int ALPHABETS = 26;
char toNumber(char c) { return c - 'A'; }
struct TrieNode {
	TrieNode* children[ALPHABETS];
	int terminal;
	int first; 
	TrieNode() {
		memset(children, 0, sizeof(children));
		terminal = first = -1;
	}
	~TrieNode() {
		for (int i = 0; i < ALPHABETS; i++)
			if (children[i])
				delete children[i];
	}
	TrieNode* find(const char* key){
		if (*key == 0) return this;
		int next = toNumber(*key);
		if (children[next] == NULL)return NULL;
		return children[next]->find(key + 1);
	}
	void insert(const char* key, int id){
		if (first == -1)
			first = id;
		if (*key == 0)
			terminal = id;
		else {
			int next = toNumber(*key);
			if (children[next] == NULL)
				children[next] = new TrieNode();
			children[next]->insert(key + 1, id);
		}
	}
	int type(const char* key, int id) {
		if (*key == 0) return 0;
		if (first == id) return 1;
		int next = toNumber(*key);
		return (1+children[next]->type(key + 1, id));
	}
};
int countKeys(TrieNode* trie, const char* word) {
	TrieNode* node = trie->find(word);
	if (node == NULL || node->terminal == -1)
		return strlen(word);
	return trie->type(word, node->terminal);
}
TrieNode* readInput(int words) {
	vector <pair<int, string>> input;
	for (int i = 0; i < words; i++) {
		char buf[11];
		int freq;
		scanf("%s %d", buf, &freq);
		input.push_back(make_pair(-freq, buf));
	}
	sort(input.begin(), input.end());
	TrieNode* trie = new TrieNode();
	for (int i = 0; i < input.size(); i++)
		trie->insert(input[i].second.c_str(), i);
	trie->first = -1;
	return trie;
}
int t, n, m;
void Testcase() {
	scanf("%d %d", &n, &m);
	TrieNode* trie = readInput(n);
	int ret = 0;
	for (int i = 0; i < m; i++) {
		char buf[11];
		scanf("%s", buf);
		int add = countKeys(trie, buf);
		ret += add;
	}
	delete trie;
	printf("%d\n", ret + m - 1);
}
int main() {
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		Testcase();
}