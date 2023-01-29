for i in range(int(input())):
    a, b = input().split(' ')
    a = max(int(a), int(b)) - min(int(a), int(b))
    print((a//10) + 1 if a % 10 else (a//10))