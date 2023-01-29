t = int(input())
for i in range(t):
    arr, brr = input().split()
    j, flag, temp = 0, 0, ""
    temp = "".join([i for i in arr if i in brr])
    if not len(temp) or len(temp) < len(brr):
        flag = 1
    for k in range(len(temp)):
        if temp[-1 - k] != brr[-1 - j] and temp[-1 - k] in brr[: -1 - j]:
            flag = 1
        elif temp[-1 - k] == brr[-1 - j]:
            j += 1
        if flag or j == len(brr):
            break
    print("NO") if flag or j != len(brr) else print("YES")
