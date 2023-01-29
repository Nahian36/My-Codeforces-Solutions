import math
n, m = list(map(int, input().split()))
p = math.ceil(n / 2)
print(-1) if n < m else print(p + (m - (p % m))) if p % m != 0 else print(p)