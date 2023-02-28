n = int(input())

d ={}
for a in range(n):
    d[a+1] = int(input())


count =0
temp =1
arr=[]
brr=[]
for a in range(1,n+1):
    temp = a
    while(temp not in arr):
        arr.append(temp)
        temp = d[temp]
    brr.append(set(arr))

    arr=[]
res=[]
[res.append(x) for x in brr if x not in res]
print(len(res))

    

    

    
    
