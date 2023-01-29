k = int(input())
arr, sum, cnt = list(map(int, input().split())), 0, 0
arr.sort(reverse = True)
for i in range(12):
    if k > sum: sum += arr[i]; cnt += 1
    else: break
print(-1) if sum < k else print(cnt)