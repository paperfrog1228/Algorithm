# Segment Tree

수들의 부분합과 같이 특정 구간을 기준으로 하는 문제에서 사용된다. 

대표적인 문제로는 [2042 : 구간 합 구하](https://www.acmicpc.net/problem/2042)가 있다.

위의 문제를 예시로 주어진 수들의 변경이 일어날 때마다 부분합을 들고있는 배열의 값을 변경한다면   
O\(N\)의 시간복잡도가 발생하므로 시간 초과가 날 것이다.

그러므로 트리 구조를 이용하여 갱신을 O\(logN\)로 처리하는 것이다. 세그먼트 트리 이용시 구간 간의 값을 구할 시에도 트리를 통해 접근하므로 O\(logN\)이 발생한다.

세그먼트 트리는 완전 이진 트리 이므로 1차원 배열을 통해 구현한다.   
이 때 트리의 배열 크기는 n보다 큰 2^k개로 구성하면 되지만 귀찮기 때문에 난 항상 n\*4로 한다.

### 초기화

```cpp
long long a[1000001],tree[4000000];
long long Init(int node,int start,int end){
  if(start==end)//리프 노드
    return tree[node]=a[start];
  
  int mid=(start+end)/2;
  return tree[node]=Init(node*2,start,mid)+Init(node*2+1,mid+1,end);
}
```

이진 트리의 구조상 계속 절반으로 나누어 아래의 노드로 내려가다 보면 결국 더 이상 나눌 수 없는 리프 노드가 되는데 그 때 트리의 노드 인덱스에 배열 값을 넣어주면된다.

### 구간 간의 값 구하기

```cpp
long long GetSum(int node,int left,int right,int start,int end){
    if(left<=start&&end<=right)
        return tree[node];
    if(right<start||end<left)
        return 0;
    int mid=(start+end)/2;
return GetSum(node*2,left,right,start,mid)+GetSum(node*2+1,left,right,mid+1,end);
}
```

이건 그림 있어야 이해되는디 집가서 그림그려줌

### 갱신하기

```cpp
void Update(int node,int index,int start,int end,long long diff){
  if(start<=index&&index<=end)
    tree[node]+=diff;
  else return;
  
  if(left==right)//리프 노드니깐 그만 내려
    return;
    
  int mid=(left+right)/2;
  Update(node*2,index,start,mid,diff);
  Update(node*2+1,index,mid+1,end,diff);
}
```

변경해야 할 배열의 값을 따라 트리 구간 찾아간다.

