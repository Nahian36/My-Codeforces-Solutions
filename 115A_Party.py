arr, maxx = [], 0
for i in range(int(input())): arr.append(int(input()))
for item in arr:
    count = 0
    while item != -1:
        item = arr[item - 1]
        count += 1
    maxx = max(maxx, count)
print(maxx + 1)