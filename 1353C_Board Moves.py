t=int(input())
lst=list()
for y in range(t):
    sum=0
    i=1
    n=int(input())
    a=(n+1)/2
    b=(4*n)+4
    while i!=a:
        sum+=(b-8*i)*(a-i)
        i+=1
    lst.append(sum)
for i in lst:
    print(int(i))