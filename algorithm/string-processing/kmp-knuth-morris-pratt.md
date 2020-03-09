---
description: 문자열 T에서 문자열 P가 있는지 찾는 알고리즘
---

# KMP\(Knuth–Morris–Pratt\)

문자열 T = ABABBABABCABB  
문자열 패턴 P = ABABC  
가 있다고 가정할 때 T에 P가 있는지 확인 하는 방법으로는   
P를 1칸씩 옮겨가며 꾸역꾸역 비교하는 방법이 있는데\(Brute-force 알고리즘\)  
이것의 시간 복잡도는 O\(t\*p\) 이다. -&gt; 터짐

KMP알고리즘의 시간 복잡도는 O\(t+p\)인데 이것이 가능한 이유는 1칸씩 옮겨가며 겹쳤던 부분의 정보를 이용하기 때문이다.

KMP알고리즘은 Pi 테이블이라는 패턴 P에 관한 정보표를 만들어야하는데  
P를 각 문자열 한 칸마다 접두사와 접미사로 나누어 겹치는 갯수를 담고있다.

```cpp
vector<int> makeTable(string pattern){
	int patternSize = pattern.size();
	vector<int> table(patternSize, 0);
	int j =0;
	for(unsigned int i = 1; i< patternSize; i++){
		while(j >0 && pattern[i] != pattern[j]){
			j = table[j-1];
		}
		if(pattern[i] == pattern[j])
			table[i] =++j;
		}
	return table;
}
```

T에서 P를 1칸씩 옮겨가며 찾다가 만약 T!= P일 경우 1칸만 옮기는 것이 아니라 겹쳤던 부분만큼의 Pi테이블 정보 만큼 점프하기 때문에 O\(t+p\)가 가능하다.

-전체 코드는 지금 c++ 문법 몰라서 자꾸 틀려서 못올림-

참고 자료 : [http://bowbowbow.tistory.com/6](http://bowbowbow.tistory.com/6)

