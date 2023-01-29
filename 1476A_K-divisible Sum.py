import math
for i in range(int(input())):
    a, b = list(map(int, input(). split()))
    ans = (math.floor(a / b) + 1 if a % b != 0 else int(a / b)) * b
    print(math.floor(ans / a) + 1 if ans % a != 0 else int(ans / a))