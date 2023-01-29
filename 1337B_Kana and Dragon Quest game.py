import math
t = int(input())
for i in range(t):
    n, a, b = list(map(int, input().split()))
    while n > 0:
        if a and n > 20: n = math.floor(n / 2) + 10; a -= 1
        elif b: n -= 10; b -= 1
        else: break
    print("NO") if n > 0 else print("YES") 