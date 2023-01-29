import math
t = int(input())
for i in range(t):
    n = int(input())
    print("YES") if math.floor(math.log10(n) / math.log10(2)) != math.ceil(math.log10(n) / math.log10(2)) else print("NO")