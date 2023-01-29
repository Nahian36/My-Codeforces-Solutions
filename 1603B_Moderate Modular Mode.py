n = int(input())
for t in range(n):
    x, y = input().split()
    x = int(x)
    y = int(y)
    if x > y:
        n = (x + 1) * y
    elif x == y or y % x == 0:
        n = x
    else:
        temp = int(y / x)
        prod = temp * x
        n = int((y + prod) / 2)
    print(n)
