k=int(input())
s=list(input())
for i in range(len(s)):
    s[i]=chr(ord(s[i])-(3*(i+1)+k))
    if ord(s[i])<65 : 
        while ord(s[i])<ord('A') :
            s[i]=chr(ord(s[i])+26)
print(''.join(s))