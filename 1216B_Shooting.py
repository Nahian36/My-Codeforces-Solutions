n, tup, ans = int(input()), (), 1
arr = input().split()
arr = list(map(int, arr))
for i in range(len(arr)):
    tup += ((arr[i], i + 1),)
tup = sorted(tup, reverse=True)
for i in range(1, len(tup)):
    ans += (tup[i][0] * i) + 1
print(ans)
for i in range(len(tup) - 1):
    print(tup[i][1], end=" ")
print(tup[i + 1][1])
