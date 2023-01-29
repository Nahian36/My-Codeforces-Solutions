t = int(input())
for i in range(t):
    n, arr, brr = int(input()), input().split(), input().split()
    arr, brr, lst, flag, last = list(map(int, arr)), list(map(int, brr)), [], 0, -1
    for i in range(n):
        if brr[i] == 0:
            lst.append(arr[i] - brr[i])
        else:
            diff = arr[i] - brr[i]
            if last == -1 and diff >= 0:
                last = diff
            if diff < 0 or last != diff:
                flag = 1
                break
    for k in lst:
        if k > last and last != -1:
            flag = 1
            break
    print("NO") if flag == 1 else print("YES")
