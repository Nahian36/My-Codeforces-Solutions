t=int(input())
lst=list()
for p in range(t):
    a=list()
    i=0
    arr=input()
    index=0
    count=1
    for l in arr:
        if l==arr[index+1:index+2]:
            count+=1
        else:
            if count%2!=0:
                a.append(l)
                i+=1
            count=1
        index += 1
        if index==len(arr):
            break
    lst.append(''.join(sorted(set(a))))
for i in lst:
    print(i)