ball=[1,0,0]
s=input()
for i in s :
    if i=='A':
        ball[0],ball[1]=ball[1],ball[0]
    if i=='B':
        ball[1],ball[2]=ball[2],ball[1]
    if i=='C':
        ball[0],ball[2]=ball[2],ball[0]
for i in range(0,len(ball)) :
    if ball[i]==1 :
        print(i+1)