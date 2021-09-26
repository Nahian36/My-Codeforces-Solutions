t=int(input())
lst=list()
for l in range(t):
    n=int(input())
    a=input().split()
    flag=0
    index=0
    for dig in a:
        if index<len(a)-1 and dig in a[index+2:]:
            flag=1
            break
        index+=1
    if flag==0: lst.append('NO')
    else: lst.append('YES')
for i in lst:
    print(i)