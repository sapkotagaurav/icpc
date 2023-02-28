


num = int(input())
arr =[]
for i in range(num):
    arr.append( input())

for a in arr:
    if len(a)<=10:
        print(a)
    else:
        print("{}{}{}".format(a[0],len(a[1:len(a)-1]),a[len(a)-1]))


