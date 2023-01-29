t = int(input())
for i in range(t):
    a, b, c, r = input().split()
    a, b, c, r, ans = int(a), int(b), int(c), int(r), 0
    lr, hr, left, right = c - r, c + r, min(a, b), max(a, b)
    if lr <= left and hr >= right:
        print(0)
    elif lr <= left:
        print(right - max(left, hr))
    elif hr >= right:
        print(min(right, lr) - left)
    else:
        print(right - left - hr + lr)
