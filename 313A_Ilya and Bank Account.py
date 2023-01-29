n = input()
print(int(n[::-1].replace(str(max(int(n[-1]), int(n[-2]))), "", 1)[::-1])) if int(n) < 0 else print(int(n))
