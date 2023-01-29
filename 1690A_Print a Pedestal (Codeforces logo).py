import math

t = int(input())
for i in range(t):
    n = int(input())
    if n % 3 == 0:
        high = int(n / 3) + 1
    else:
        high = math.floor(n / 3) + 2
    mid = int(n - high)
    if mid % 2 == 0:
        mid = int((mid / 2) + 1)
    else:
        mid = math.floor(mid / 2) + 1
    print(mid, high, n - high - mid)
