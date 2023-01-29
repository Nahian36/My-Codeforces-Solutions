t = int(input())
for i in range(t):
    n = int(input())
    arr = input().split()
    arr = list(map(int, arr))
    ans = []
    for i in range(len(arr)):
        if i != arr[i]:
            ans.append(arr[i])
    res = ans[0]
    for i in range(len(ans)):
        res = res & ans[i]
    print(res)
