n = input()
brr = input().split()
brr = list(map(int, brr))
arr = [brr[0]]
maxx = arr[0]
for i in range(1, len(brr)):
    arr.append(brr[i] + maxx)
    maxx = max(maxx, arr[-1])
for i in range(len(arr) - 1):
    print(arr[i], end=" ")
print(arr[i + 1])
