year = input()
print(int(str(int(year[0]) + 1) + ("0" * (len(year) - 1))) - int(year))
