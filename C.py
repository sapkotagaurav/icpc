s = input()
s = s.lower()
r =""
for a in s:
    if a in ["a","e","i","o","u","y"]:
        pass
    else:
        r = r +"."+a
print(r)
