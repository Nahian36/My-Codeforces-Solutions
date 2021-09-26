t=int(input())
for l in range(t):
    n=input()
    a=input().split()
    for i in range(len(a)):
        a[i]=int(a[i])
    b=sorted(a,reverse=True)
    for i in b:
        print(i,end=' ')
    print()
