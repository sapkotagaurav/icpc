num = int(input())
t =0
for a in range(num):
    if(input().split(" ").count("1")>1):
        t=t+1
print(t)
