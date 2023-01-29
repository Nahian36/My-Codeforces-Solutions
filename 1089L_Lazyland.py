n, k = input().split()
arr, brr = input().split(), input().split()
arr, brr = list(map(int, arr)), list(map(int, brr))
dic, ans, cnt = {}, [], 0
for i in range(int(k)):
    dic[i + 1] = list()
for i in range(int(n)):
    dic[arr[i]].append(brr[i])
for i in range(int(k)):
    dic[i + 1].sort()
    if len(dic[i + 1]) > 1:
        ans.extend(dic[i + 1][: len(dic[i + 1]) - 1])
    elif len(dic[i + 1]) == 0:
        cnt += 1
ans.sort()
ans = ans[:cnt]
print(sum(ans))
