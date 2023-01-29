t = int(input())
for i in range(t):
    n, flag = int(input()), 0
    arr = input().split()
    arr = list(map(int, arr))
    brr = input().split()
    brr = list(map(int, brr))
    arr.sort()
    brr.sort()
    for i in range(n):
        if brr[i] - arr[i] > 1 or arr[i] > brr[i]:
            flag = 1
            break
    print("NO") if flag else print("YES")
