for i in range(int(input())):
    n, arr, lst, cnt = input(), input(), [], 0
    for j in arr:
        if j == "(": lst.append("(")
        elif len(lst) == 0: cnt += 1
        else: lst = lst[:-1]
    print(cnt)