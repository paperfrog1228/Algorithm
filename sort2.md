# Sort2

## Merge sort

### Divide-And-Conquer

* 분할 : 해결하고자 하는 문제를 작은 크기의 동일한 문제들로 분할
* 정복 : 각각의 작은 문제를 순환적으로 해결
* 합병 : 작은 문제의 해를 합하여\(merge\) 원리 문제에 대한 해를 구함

![](.gitbook/assets/image%20%284%29.png)

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

![](.gitbook/assets/image%20%288%29.png)

