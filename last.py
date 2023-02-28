n = int(input())
def s(array:list,n):
    return sum(array)-n*min(array)

m=[]
for i in range(n):
    a = int(input())
    b= [int(x) for x in input().split(" ")]
    m.append((a,b))

for c in m:
    print(s(c[1],c[0]))

    