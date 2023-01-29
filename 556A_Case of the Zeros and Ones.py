n = int(input())
arr = input()
print(n - 2 * min(arr.count("0"), arr.count("1")))
