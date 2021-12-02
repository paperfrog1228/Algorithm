from queue import PriorityQueue
n,m=map(int,input().split())
adj=[[]for _ in range(110)]
vis=[0 for _ in range(110)]
for i in range(n):
    a,b=map(int,input().split())
    adj[a].append(b)
for i in range(m):
    a,b=map(int,input().split())
    adj[a].append(b)    
q=PriorityQueue()
q.put((0,1))
while q:
    now=q.get()
    if vis[now[1]]:
        continue 
    vis[now[1]]+=1
    if now[1]==100:
        print(now[0])
        break
    for nxt in adj[now[1]]:
        q.put((now[0],nxt))
    if adj[now[1]]: continue
    for i in range(0,7):
        tmp=now[1]+i
        if tmp>100:
            continue
        q.put((now[0]+1,tmp))