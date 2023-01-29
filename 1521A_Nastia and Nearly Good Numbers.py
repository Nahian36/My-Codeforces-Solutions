for i in range(int(input())):
    a, b = list(map(int, input(). split()))
    if b != 1:
        print("YES"); print(a, a * b, a * (b + 1))
    else: print("NO")