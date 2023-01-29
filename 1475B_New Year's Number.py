t = int(input())
for i in range(t):
    n = int(input())
    print("YES") if (n / 2020) >= (n % 2020) else print("NO")
