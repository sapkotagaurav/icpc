a = input()
b = input()

x ='abcdefghijklmnopqrstuvwxyz'
d={}
for m in range(26):
    d[x[m]] = m
i,j=0,0
s=""
while(i<len(a) or j<len(b)):
    if i>=len(a):
        s+=b[j:]
        break
    if j>=len(b):
        s+=a[i:]
        break
    
    if d[a[i]]<d[b[j]]:
        s+=a[i]
        i=i+1
    elif d[b[j]]<d[a[i]]:
        s+=b[j]
        j+=1
    elif d[b[j]]==d[a[i]]:
        s+=b[j]
        s+=b[j]
        i=i+1
        j=j+1

print(s)


