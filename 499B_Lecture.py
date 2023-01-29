n, m = list(map(int, input().split()))
dct = {}
for i in range(m):
    arr, brr = input().split()
    dct[arr] = arr if (len(arr) <= len(brr)) else brr
lst = input().split()
for i in range(n - 1): print(dct[lst[i]], end = " ")
print(dct[lst[n - 1]])