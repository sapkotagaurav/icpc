line = input().split(" ")
a,b = int(line[0]),int(line[1])


def s(n1,n2):
    if(n1==1 and n2==10):return -1
    ret_num = 10**(n1-1)
    for i in range(2,11):
        if((ret_num+i)%n2==0):
            return ret_num+i
            
print(s(a,b))