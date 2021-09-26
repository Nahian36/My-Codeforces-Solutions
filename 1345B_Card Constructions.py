t=int(input())
lst=list()
for y in range(t):
    sum=0
    n=int(input())
    while n>1:
        s=2
        while n>=s:
            n-=s
            s+=3
        sum+=1
    lst.append(sum)
for i in lst:
    print(int(i))