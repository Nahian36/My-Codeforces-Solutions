t = int(input())
for i in range(t):
    n = int(input())
    arr = input().split()
    arr = list(map(int, arr))
    odd, even = 0, 0
    for j in range(len(arr)):
        if arr[j] % 2 != 0:
            odd += 1
        else:
            even += 1
    print("YES") if odd % 2 != 0 or 0 < odd < len(arr) else print("NO")
