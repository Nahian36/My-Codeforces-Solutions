import math
t = int(input())
for i in range(t):
    cnt = 1
    n = input()
    arr = input()
    for i in reversed(range(math.ceil(len(arr)/2))):
        if arr[i] == arr[i-1] and i != 0:
            cnt += 1
        else: break
    if len(arr) % 2 == 0: cnt *= 2
    else: cnt = cnt + cnt - 1
    print(cnt)