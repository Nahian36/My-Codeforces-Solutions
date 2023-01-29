n = int(input())
arr = input().split()
arr = list(map(int, arr))
arr.sort()
res = int(sum(arr) / 2) + 1
for i in range(len(arr)):
    if sum(arr[-1 - i :]) >= res:
        print(i + 1)
        break
