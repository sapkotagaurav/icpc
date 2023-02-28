FUNCTION exclusiveOr(arr1,arr2):
    i=0
    j=0
    DEFINE ARRAY retArr
    WHILE(i<arr1.length && j<arr2.length)
        IF(arr1[i]<arr2[j])
            retArr.addELEMENT(arr1[i])
            i=i+1
        ELSE IF(arr1[i]>arr2[j]):
            retArr.addElement(arr2[j])
            j=j+1
        ELSE:
            i=i+1
            j=j+1
    IF(i!=arr1.length):
        WHILE( i< arr1.length):
            retArr.addElement(arr1[i])
            i=i+1
    
    IF(j!=arr2.length):
        WHILE j< arr2.length:
            retArr.addElement(arr2[j])
            j=j+1
    
    RETURN retArr




print(exclusiveOr([1,2,5,6,9],[2,3,4,5,10,11]))