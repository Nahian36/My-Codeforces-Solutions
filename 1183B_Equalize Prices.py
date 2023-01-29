t = int(input())
for i in range(t):
    n, k = input().split()
    arr = input().split()
    arr = list(map(int, arr))
    arr.sort()
    arr[0] += int(k)
    print(arr[0]) if abs(arr[-1] - arr[0]) <= int(k) else print(-1)
