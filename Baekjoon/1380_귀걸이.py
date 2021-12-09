T=0
while True:
    T+=1
    n=int(input())
    if n==0:break
    a=[]
    b=[0 for i in range(n)]
    for i in range(n):
        a.append(input())
    for i in range(2*n-1):
        k,t=input().split()
        k=int(k)
        k-=1
        b[k]+=1
    for i in range(n):
        if b[i]<2:
            print(T,a[i])
            break