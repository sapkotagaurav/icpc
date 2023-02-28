




inp = input().split(" ")
x = int(inp[0])
y = int(inp[1])
r = 0
arr = [ int(m) for m  in input().split(" ")]
for a in arr:
    if a>=arr[y-1] and a!=0:
        r +=1
    else: 
        pass
print(r)