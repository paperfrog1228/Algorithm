n=int(input())
mp=[0 for _ in range(n)]
for i in range(n):
    mp[i]=list(map(int,input().split()))
flag=False
def go(x,y):
    global flag
    if x>=n:
        return
    if y>=n:
        return
    t=mp[x][y]
    if(t==0):
        return
    if(t==-1):
        flag=True
        return
    go(x+t,y)
    go(x,y+t)
go(0,0)
if flag :
    print("HaruHaru")
else :
    print("Hing")