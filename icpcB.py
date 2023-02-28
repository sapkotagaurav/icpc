import math



def f(a,b):
    x=0
    for n in range(0,a,2):
        x += 10**n

    g = 10**a *0.9 -1
    
    g = math.floor(g/b)
    print(g/x)


print(f(100,87))