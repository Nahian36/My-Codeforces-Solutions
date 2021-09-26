t=int(input())
lst=list()
for l in range(t):
    sum=0
    a,n=input().split()
    n=int(n)
    if n==1: sum=a
    for p in range(n-1):
        if min(a)=='0' or max(a)=='0':
            sum=a
            break
        sum=int(a)+int(min(a))*int(max(a))
        a=str(sum)
    lst.append(sum)
for i in lst:
    print(i)