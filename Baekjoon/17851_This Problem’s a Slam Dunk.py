su=list(map(int, input().split()))
us=list(map(int, input().split()))
su.sort()
us.sort()
ans=0
for i in range(0,5) :
    if su[i]>us[i] :
        ans+=1
print(ans)