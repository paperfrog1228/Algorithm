n=int(input())
p=list(map(int,input().split()))
mn=p[0]
mx=0
ans=0
for i in range(1,n):
    if p[i]>mx:
        mx=p[i]
    else:
        mn=p[i]
        mx=p[i]
    if ans<mx-mn:
        ans=mx-mn
print(ans)