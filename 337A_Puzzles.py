n, m = input().split()
arr = input().split()
arr = list(map(int, arr))
arr.sort()
res = arr[int(n) - 1] - arr[0]
for i in range(int(m) - int(n) + 1):
    if arr[i + int(n) - 1] - arr[i] < res:
        res = arr[i + int(n) - 1] - arr[i]
print(res)
