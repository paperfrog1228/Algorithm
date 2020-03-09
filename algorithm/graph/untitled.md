# Union Find

```cpp
int header[];
int find(int num) {
    if (num == header[num])
        return header[num];
    return find(header[num]);
}

void union(int num1, int num2) {
    int num1Root = find(num1);
    int num2Root = find(num2);
    header[num2Root] = num1Root;
}
```



