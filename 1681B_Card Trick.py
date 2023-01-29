t = int(input())
for i in range(t):
    n = int(input())
    arr = input().split()
    arr = list(map(int, arr))
    m = int(input())
    brr = input().split()
    brr = list(map(int, brr))
    print(arr[sum(brr) % n])
