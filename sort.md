# Sort

## Selection Sort

배열을 순회하면서 가장 큰 값을 찾아 맨 뒤에 위치해주는 것을 반복.

![](.gitbook/assets/image%20%2811%29.png)

```text
SelectionSort(A[],n){
    for last <- n downto 2{
        A[1..last] 중 가장 큰 수 A[k]를 찾음
        A[k] <-> A[last];
        }
}
```



## Bubble Sort

선택 정렬과 비슷하지만 선택한 값을 맨 뒤로 보내는 것이 아니다

![](.gitbook/assets/image%20%284%29.png)

```text
BubbleSort(A[], n){
    for last <- n downto 2 {
        for i <- 1 to last-1
          if(A[i]>A[i+1]) then A[i] <-> A[i+1];
}
```



## Insertion Sort

배열 순회하면서 데이터 하나 딱 골라서, 그 데이터 앞에까지 다 순회 조져서 적절한 위치에 끼워넣는 것.

![](.gitbook/assets/image.png)

![](.gitbook/assets/image%20%281%29.png)

배열의 경우 적절한 위치에 삽입 할 때 쉬프트가 일어나기 때문에 뒤에서 보는게 이득이다.

왜냐면 위의 예제에서 어짜피 4보다 큰놈들은 뒤로 보내질 운명이기 때문이다

```text
InsertionSort(A[], n){
    for i <- 2 to n{
        A[1..i]의 적당한 자리에 A[i]를 삽입한다.
    }
}
```



