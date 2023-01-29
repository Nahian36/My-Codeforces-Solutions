t = int(input())
for i in range(t):
    num, j, k = int(input()), 1, 1
    while j < num:
        j += 2**k
        k += 1
        if num % j == 0:
            print(int(num / j))
            break
