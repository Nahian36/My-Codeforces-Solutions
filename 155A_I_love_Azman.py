num = input()
arr = list(map(int,input().split()))
maxx, minn, count = arr[0], arr[0], 0
for i in arr[1:]:
    if maxx < i:
        maxx = i
        count += 1
    elif minn > i:
        minn = i
        count += 1
print(count)
