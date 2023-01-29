import math

t = int(input())
for i in range(t):
    arr = input().split()
    r, b = int(arr[1]), int(arr[2])
    gap = math.ceil(r / (b + 1))
    t1 = r - ((b + 1) * (gap - 1))
    t2 = ((b + 1) * gap) - r
    if t2 == 0:
        t1 -= 1
    print(
        ((("R" * gap) + "B") * t1)
        + ((("R" * (gap - 1)) + "B") * (t2 - 1))
        + ("R" * (r - ((gap * t1) + ((gap - 1) * max(0, (t2 - 1))))))
    )
