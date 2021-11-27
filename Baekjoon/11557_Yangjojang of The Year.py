t=int(input())
while(t>0):
    t-=1
    n=int(input())
    a=[]
    for i in range(n):
        s,j=input().split()
        j=int(j)
        a.append((j,s))
    a.sort(reverse=True)
    print(a[0][1])