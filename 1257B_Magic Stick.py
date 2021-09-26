t=int(input())
lst=list()
for l in range(t):
    a,b=input().split()
    if int(a)>=int(b) or int(a)>3 or (a=='2' and b=='3'): lst.append('YES')
    else: lst.append('NO')
for i in lst:
    print(i)