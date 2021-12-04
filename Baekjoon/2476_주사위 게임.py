n=int(input())
mx=0
for i in range(n):
    t=0
    a,b,c=map(int,input().split())
    if a==b==c:t=10000+a*1000
    elif a==b:t=1000+a*100
    elif a==c:t=1000+a*100
    elif b==c:t=1000+b*100
    else: t=max(a,b,c)*100
    if t>mx:mx=t
print(mx)