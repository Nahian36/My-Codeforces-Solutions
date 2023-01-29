for i in range(int(input())):
    lst = list()
    num = input()
    for j in range(len(num)):
        if num[j] != '0': lst.append(int(num[j] + ((len(num) - j - 1) * '0')))
    print(len(lst))
    print(*lst)