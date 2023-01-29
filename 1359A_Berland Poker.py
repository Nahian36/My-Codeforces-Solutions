import math
for i in range(int(input())):
    n, j, k = list(map(int, input(). split()))
    maxx = min(int(n / k), j)
    print(maxx - math.ceil((j - maxx )/ (k - 1)))