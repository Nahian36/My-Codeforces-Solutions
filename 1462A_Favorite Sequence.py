t = int(input())
for i in range(t):
    n = int(input())
    arr = input().split()
    arr = list(map(int, arr))
    ans = []
    for j in range(int(len(arr) / 2)):
        ans.append(arr[j])
        ans.append(" ")
        ans.append(arr[-j - 1])
        ans.append(" ")
    if len(arr) % 2 != 0:
        ans.append(arr[int(len(arr) / 2)])
    else:
        del ans[-1]
    for k in range(len(ans)):
        print(ans[k], end="")
    print()
