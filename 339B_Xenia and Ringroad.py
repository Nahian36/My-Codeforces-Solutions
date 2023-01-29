n, m = list(map(int, input().split()))
arr = list(map(int, input().split()))
for i in range(1, len(arr)):
    arr[0] += n + arr[i] - arr[i - 1] if arr[i] < arr[i - 1] else arr[i] - arr[i - 1]
print(arr[0] - 1)
