t=int(input())
a=[1,2,3,3,4,10]
b=[1,2,2,2,3,5,10]
for k in range(0,t) :
    c=0
    d=0
    e=list(map(int,input().split()))
    f=list(map(int,input().split()))
    for i in range(len(e)) :
        c+=a[i]*e[i]
    for i in range(len(f)) :
        d+=b[i]*f[i]
    print("Battle %d: "%(k+1),end='')
    if c>d:
        print("Good triumphs over Evil")
    elif c==d :
        print("No victor on this battle field")
    else : 
        print("Evil eradicates all trace of Good")