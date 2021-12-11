n=int(input())
m=int(input())
a=list(map(int,input().split()))
chk=[0 for _ in range(len(a)+10)]
l=[]
for i in range(len(a)):
    if chk[a[i]]==0:
        if len(l)>=n:
            l.sort()
            t=l.pop(0)
            chk[t[2]]=0
        l.append((1,i,a[i]))
        chk[a[i]]+=1
    else:
        for j in range(len(l)):
            if(l[j][2]==a[i]):
                t=list(l[j])
                del l[j]
                t[0]+=1
                l.append(tuple(t))
                break
ans=[]
for i in range(len(l)):
    ans.append(l[i][2])
ans.sort()
print(' '.join(map(str,ans)))