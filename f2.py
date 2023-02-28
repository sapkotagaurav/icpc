
def conj(n):
    count=1
    while n!=1:
        if n%2==0:
            n=n/2
        else:
            n=3*n+1
        count+=1
    return count
def a(a,b):
    m = conj(a)
    for x in range(a+1,b+1):
        m = max(m,conj(x))
    return m

contents=[]
while True:
    try:
        line = input()
    except EOFError:
        break
    contents.append(line)

for line in contents:
    l = line.split(" ")
    n1,n2 = int(l[0]),int(l[1])
    print(n1,n2,a(n1,n2))