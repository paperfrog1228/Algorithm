# Sort2

## Merge sort

### Divide-And-Conquer

* 분할 : 해결하고자 하는 문제를 작은 크기의 동일한 문제들로 분할
* 정복 : 각각의 작은 문제를 순환적으로 해결
* 합병 : 작은 문제의 해를 합하여\(merge\) 원리 문제에 대한 해를 구함

![](.gitbook/assets/image%20%2813%29.png)

```text
MergeSort(A[], p, r){
    if(p < r) then {
        q <-(p+q)/2'
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A, q, q, r);
    }
}
Merge(A[], p, q, r){
    정렬되어 있는 두 배열 A[p...q]와 A[q+1...r]을 합하여
    정렬된 하나의 배열 A[p...r]을 만든다.
}

```

### 시간복잡도

![](.gitbook/assets/image%20%2819%29.png)



## Quick sort

### Divide and Conquer

* 분할 : 배열에 어떤 pivot을 두고 그 pivot 보다 작은 값과 큰 값으로 분할
* 정복 : 각 부분을 순환적으로 정렬
* 합병 : nothing to do

![](.gitbook/assets/image%20%289%29.png)

```text
QuickSort(A[], p, r){
    if (p<r) then {
        q = partition(A, p, r);// 분할
        QuickSort(A, p, q-1);// 왼쪽 부분배열 정렬
        QuickSort(A, q+1, r);// 오른쪽 부분배열 정렬
        
    }
}
Partition(A[], p, r){
    배열 A[p...r]의 원소들을 A[r]을 기준으로 양쪽으로 재배치하고
    A[r]이 자리한 위치를 return;
    x<-A[r]// Pivot
    i<-p-1;
    for j<-p to r-1{
        if A[j]<=x then
            i<-i+1;
          exchange A[i] and A[j];
    }
    exchange A[i+r] and A[r];
    return i+1;
}
```



### 시간 복잡도

#### 항상 한 쪽은 0개, 다른 쪽은 n-1개로 분할되는 경우\(최악\)

![](.gitbook/assets/image%20%2812%29.png)



#### 항상 절반으로 분할되는 경우

![](.gitbook/assets/image%20%2811%29.png)

#### 

#### 항상 한쪽이 적어도 1/9 이상이 되도록 분할된다면?

![](.gitbook/assets/image%20%2820%29.png)

#### 평균 시간복잡

![](.gitbook/assets/image%20%2821%29.png)





### Pivot의 선

#### 첫번째 값이나 마지막 값을 피봇으로 선택

* 이미 정렬된 데이터 혹은 거꾸로 정렬된 데이터가 최악의 경우
* 현실의 데이터는 랜덤하지 않으므로 정렬된 데이터가 입력으로 들어올 가능성이 매우높다
* 별로 좋은 방법 아니

#### Median of Three

* 첫번쨰 값과 마지막값, 그리고 가운데 값 중에서 중간값\(median\)을 피봇으로 선택
* 최악의 경우 시간복잡도가 달라지지 않음

#### Randomized Quick sort

* 피봇을 랜덤하게 선택
* no worst case instance, but worst case execution
* 평균 시간복잡도 O\(nlogn\)

