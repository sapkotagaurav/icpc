a =[0,1,2,3]

arr =[]

inp = input().split(" ")
i = int(inp[0])
j = int(inp[1])
c = int(inp[2])

for m in a:
    res = 0
    if m==0:
        res = i+j
    elif m==1:
        res = i-j
    elif m==2:
        res = i*j
    elif m==3:
        if(i%j==0):
            res = i/j
        else:
            break
    for b in a:
        if b==0:
            arr.append(res+c)
        elif b==1:
            arr.append(res-c)
        elif b==2:
            arr.append(res*c)
        elif b==3:
            if res%c==0 : 
                arr.append(res/c)
            else:
                continue


temp = arr[0]


for g in arr:
    if (g%1==0 and g>=0 and g<=temp):
        temp =g
    

print(int(temp))
    

