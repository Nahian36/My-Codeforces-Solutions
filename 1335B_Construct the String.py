t, str = int(input()), "abcdefghijklmnopqrstuvwxyz"
for i in range(t):
    n, a, b = list(map(int, input().split()))
    print(((str[:b]) * int(n / b)) + str[: (n % b)])
