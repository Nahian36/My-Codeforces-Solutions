arr=input()
flag=1
for i in range(len(arr)):
    if arr[i] not in ('a','e','i','o','u','n') and (i==len(arr)-1 or arr[i+1] not in ('a','e','i','o','u')):
        flag=0
        break
if flag:
    print('YES')
else:
    print('NO')