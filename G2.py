d={}
def f(s):
    for a in range(len(s)):
        if s[a] in d.keys():
            d[s[a]].append(a)
        else:
            d[s[a]] =[a]
    
def g(t,s):
    temp =len(s)
    count=0
    for a in t:
        if(len(d[a])==1):
            if(d[a][0]<=temp):
                count+=1
                temp = d[a][0]
        else:
            found = False
            for x in d[a]:
                if x>temp:
                    found = True
                    temp =x
                    break
            if(not found):
                count+=1
                temp = d[a][0]
    return count

                


s1 =input()
s2 = input()
f(s1)

print(g(s2,s1))



    
    