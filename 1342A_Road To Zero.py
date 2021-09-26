t=int(input())
lst=list()
for l in range(t):
    sum1=0
    sum2=0
    x,y = input().split()
    a, b = input().split()
    p=max(int(x),int(y))
    q=min(int(x),int(y))
    sum1=(q*int(b))+((p-q)*int(a))
    sum2=(int(x)+int(y))*int(a)
    lst.append(min(sum1,sum2))
for i in lst:
    print(int(i))