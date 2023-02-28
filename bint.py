class BinT:
    def __init__(self,) -> None:
        self.left = None
        self.right = None

def a(l:list):
    d={}
    di={}
    for m,x in enumerate(l):
        d[x]=m+1
        di[m+1]=x
    print(d,di)
    

    for b in di.keys():
        spider = b
        
        while True:
            


            if [spider+1 in di.keys() and di[spider+1]>di[spider]]:
                spider +=1
            elif [spider-1 in di.keys() and di[spider-1]>di[spider]]:
                spider -=1
            else:
                print(spider)
                break
            print(spider)

        
            
        

a([6,4,2,1,3,5])
