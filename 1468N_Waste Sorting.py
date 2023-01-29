t = int(input())
for i in range(t):
    arr, brr = input().split(), input().split()
    arr, brr = list(map(int, arr)), list(map(int, brr))
    flag = 0
    if brr[0] > arr[0] or brr[1] > arr[1] or brr[2] > arr[2]:
        flag = 1
    else:
        arr[0] -= brr[0]
        arr[1] -= brr[1]
        arr[2] -= brr[2]
        if arr[0] + arr[2] < brr[3]:
            flag = 1
        else:
            arr[0] -= brr[3]
        if arr[0] < 0:
            arr[2] += arr[0]
        if arr[1] + arr[2] < brr[4]:
            flag = 1
    print("NO") if flag else print("YES")
