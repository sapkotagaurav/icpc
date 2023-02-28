def convert(s:str, numRows:int):
    count =0
    size = len(s)
    oneless = numRows-1
    r=0
    if(size==1):
        return s
    arr =[]
    arr2 =[arr for x in range(numRows)]
    print(arr2)
    while count<size:
        if(r%oneless==0):
            for i in range(numRows):
                print(count)
                arr2[i].append(s[count])
                count+=1
        else:
            arr2[oneless-(r%oneless)].append(s[count])
            count+=1
        r+=1
    print(arr2)
    toret=""
    for i in arr2:
        for j in i:
            toret +=j

    return toret

    
print(convert("PAYPALISHIRING",4))
