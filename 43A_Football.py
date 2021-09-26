n=int(input())
dic=dict()
lar=None
lnum=None
while n:
    n-=1
    word=input()
    dic[word]=dic.get(word,0)+1
    if lnum is None or dic[word]>lnum:
        lnum=dic[word]
        lar=word
print(lar)