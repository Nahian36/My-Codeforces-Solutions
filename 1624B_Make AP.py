for i in range(int(input())):
    a, b, c = list(map(int,input().split()))
    if (a + c) % 2 == 0 and ((a + c) // 2) % b == 0: print("YES")
    else:
        diff1, diff2 = b - a, c - b
        if ((b + diff1) > 0 and (b + diff1) % c == 0) or ((b - diff2) > 0 and (b - diff2) % a == 0): print("YES")
        else: print("NO")