lr = input()
str = input()
arr = "qwertyuiopasdfghjkl;zxcvbnm,./"
for i in str:
    print(arr[arr.find(i) - 1], end="") if lr == "R" else print(arr[arr.find(i) + 1], end="")
