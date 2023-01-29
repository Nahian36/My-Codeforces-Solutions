t = int(input())
for i in range(t):
    n, m = input().split()
    n, m = int(n), int(m)
    cnt = 0
    for i in range(n):
        linee = input()
        if linee[-1] != "D":
            cnt += 1
    for i in linee:
        if i != "R":
            cnt += 1
    print(cnt - 2)
