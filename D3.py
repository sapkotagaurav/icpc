x = input()
y = input()

# def trans(a,b):
#     l,m = len(a),0
#     if l !=len(b):return False
#     while l>m:
        
#         if a[l-1] != b[m]:
#             return False
#         m+=1
#         l=l-1
#     return True
if(x[::-1]==y):
    print("YES")
else:
    print("NO")