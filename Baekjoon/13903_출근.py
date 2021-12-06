R,C=map(int,input().split())
vis=[[0]*1010 for _ in range(1010)]
a=[[]for _ in range(R) ]
for i in range(0,R):
    a[i]=list(map(int,input().split()))
d=[]
n=int(input())
for i in range(0,n):
    r,c=map(int,input().split())
    d.append((r,c))
q=[]
q2=[]
ans=0
fin=False
for i in range (C):
    if a[0][i]==1:
        q.append((0,i))
        vis[0][i]+=1
while len(q) or len(q2):
    if fin:break
    while len(q) :
        if fin:break
        now=q.pop(0)
        for i in range(len(d)):
            nr=now[0]+d[i][0]
            nc=now[1]+d[i][1]
            if nr<0 or nc<0 or nr>=R or nc>=C:continue
            if a[nr][nc]==0:continue
            if vis[nr][nc]:continue
            if nr==R-1:
                print(ans+1)
                fin=True
                break
            q2.append((nr,nc))
            vis[nr][nc]+=1
    q,q2=q2,q
    ans+=1
if not fin:print(-1)