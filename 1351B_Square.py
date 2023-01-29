n = int(input())
for i in range(n):
    arr, brr = input().split(), input().split()
    arr, brr = list(map(int, arr)), list(map(int, brr))
    arr.sort()
    brr.sort()
    print("Yes") if arr[0] + brr[0] == arr[1] and arr[1] == brr[1] else print("No")
