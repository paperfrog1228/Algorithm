cnt=0
while(1):
    cnt+=1
    a,op,b=input().strip().split()
    if op=='E' : break
    if op=="!=":print("Case {}: ".format(cnt)+str(int(a)!=int(b)).lower())
    elif op=="<":print("Case {}: ".format(cnt)+str(int(a)<int(b)).lower())
    elif op=="<=":print("Case {}: ".format(cnt)+str(int(a)<=int(b)).lower())
    elif op==">":print("Case {}: ".format(cnt)+str(int(a)>int(b)).lower())
    elif op==">=":print("Case {}: ".format(cnt)+str(int(a)>=int(b)).lower())
    elif op=="==":print("Case {}: ".format(cnt)+str(int(a)==int(b)).lower())