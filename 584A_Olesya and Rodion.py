n, m = list(map(int, input().split()))
arr = int("1" + ("0" * (n - 1)))
if arr % m != 0: arr += m - (arr % m)
print(arr) if len(str(arr)) <= n else print(-1)