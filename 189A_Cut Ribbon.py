n, a, b, c = list(map(int, input().split()))
res = [0] * (n + 1)
for i in range(1, n + 1):
    p, q, r = -1, -1, -1
    if i >= a:
        p = res[i - a]
    if i >= b:
        q = res[i - b]
    if i >= c:
        r = res[i - c]
    res[i] = -1 if p == -1 and q == -1 and r == -1 else 1 + max(p, q, r)
print(res[n])
