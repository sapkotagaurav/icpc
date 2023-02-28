a = [int(x) for x in input().split(" ")]
a.sort()
b ={}
c = input()
b['A'] = a[0]
b['B'] = a[1]
b['C'] = a[2]

print("{} {} {}".format(b[c[0]],b[c[1]],b[c[2]]))