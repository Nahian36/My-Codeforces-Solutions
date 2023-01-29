n, m = input().split()
arr = input().split()
arr = list(map(int, arr))
rem = int(m)
ans, cnt = [], 0
for i in range(int(n)):
    if rem <= arr[i] and rem != int(m):
        if rem != 0:
            cnt += 1
        arr[i] -= rem
        rem = int(m)
    ans.append(int(arr[i] / rem) + cnt)
    cnt = 0
    rem -= arr[i] - (int(arr[i] / rem) * rem)
for i in range(len(ans) - 1):
    print(ans[i], end=" ")
print(ans[-1])
