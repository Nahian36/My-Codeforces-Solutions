t = int(input())
for i in range(t):
    l, r, a = input().split()
    l, r, a = int(l), int(r), int(a)
    new = r - (r % a) - 1 if l < r - (r % a) else r
    ans = int(new / a) + (new % a)
    if new + a <= r:
        ans += 1
    print(ans)
