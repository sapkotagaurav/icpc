def rob(nums):
    max1 =0
    l = len(nums)
    max2 =0
    count = 0
    bount =1
    while(count<=l-1 or bount<=l-1):
        if count<l:
            max1 += nums[count]
            count+=2
        if bount<l:
            max2 += nums[bount]        
            bount+=2
    
    return max(max1,max2)
print(rob([int(x) for x in input().split(" ")]))