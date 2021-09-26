t=int(input())
lst=list()
for l in range(t):
    same=dict()
    t=list()
    n = int(input())
    x=input()
    t=x.split()
    for item in t:
        same[item]=same.get(item,0)+1
    t2=sorted(same.values(),reverse=True)
    if t2[0]-len(same)>=1:
        lst.append(len(same))
    else:
        lst.append(min(len(same)-1,t2[0]))
for i in lst:
    print(int(i))