t=int(input())
lst=list()
for l in range(t):
    l,r,d,u=input().split()
    a,b,lr,dr,rr,ur=input().split()
    if int(r)-int(l)+int(a)<=int(rr) and int(r)-int(l)+int(a)>=int(lr) and int(u)-int(d)+int(b)<=int(ur) and int(u)-int(d)+int(b)>=int(dr) and (lr!=rr or (int(l)+int(r))==0) and (ur!=dr or (int(u)+int(d))==0):
        lst.append('Yes')
    else:
        lst.append('No')
for i in lst:
    print(i)