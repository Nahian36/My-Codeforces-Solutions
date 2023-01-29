t = int(input())
for i in range(t):
    arr, cnt, str1, str2 = input(), 0, "01", "10"
    while str1 in arr or str2 in arr:
        if str1 in arr: arr = arr.replace(str1, "", 1)
        elif str2 in arr: arr = arr.replace(str2, "", 1)
        cnt += 1
    print("DA") if cnt % 2 != 0 else print("NET")