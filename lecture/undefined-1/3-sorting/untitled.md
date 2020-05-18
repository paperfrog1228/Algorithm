# Sort4

## Comparison Sort

* 데이터들간의 상대적 크기관계만을 이용해서 정렬하는 알고리즘
* 따라서 데이터들간의 크기 관계가 정의되어 있으면 어떤 데이터에든 적용가능 \(문자열, 알파 벳, 사용자 정의 객체 등\)
* 버블소트, 삽입정렬, 합병정렬, 퀵소트, 힙정렬 등

Non-comparison sort

* 정렬할 데이터에 대한 사전지식을 이용 - 적용에 제한 
* Bucket sort 
* Radix sort

하한 \(Lower bound\)

* 입력된 데이터를 한번씩 다 보기위해서 최소 Θ\(n\)의 시간복잡도 필요 
* 합병정렬과 힙정렬 알고리즘들의 시간복잡도는 Θ\(nlogn\) 
* 어떤 comparison sort알고리즘도 Θ\(nlogn\)보다 나을수 없다

## Decision Tree\(결정 트리\)

Abstraction of any comparison sort.

![&#xAC12;&#xC774; &#xC544;&#xB2C8;&#xB77C; 1&#xBC88; &#xB370;&#xC774;&#xD130;, 2&#xBC88;&#xB370;&#xC774;&#xD130; &#xBE44;&#xAD50;&#xD55C;&#xB2E4;&#xB294; &#xB73B;](../../../.gitbook/assets/image%20%2818%29.png)

* Leaf노드의 개수는 n!개. 왜냐하면 모든 순열\(permutation\)에 해당하므로
* 최악의 경우 시간복잡도는 트리의 높이 
* 트리의 높이는 height ≥logn!= Θ\(nlogn\)

