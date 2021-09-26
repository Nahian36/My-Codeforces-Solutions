t=int(input())
lst=list()
for p in range(t):
    sum=0
    n,m=input().split()
    a=input().split()
    b=input().split()
    for i in range(len(a)):
        a[i]=int(a[i])
    for i in range(len(b)):
        b[i]=int(b[i])
    a.sort()
    b.sort(reverse=True)
    for i in range(int(m)):
        if b[i]>a[i]:
            a[i]=b[i]
    for i in a:
        sum+=i
    lst.append(sum)
for i in lst:
    print(i)