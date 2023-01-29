t = int(input())
for i in range(t):
    n, flag, cnt = int(input()), 0, 0
    while n != 1:
        if n % 6 == 0:
            n /= 6
        elif n % 6 == 3:
            n *= 2
        else:
            flag = 1
            break
        cnt += 1
    print(-1) if flag else print(cnt)
