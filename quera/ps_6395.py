n=int(input())
t=0
l=list(map(int,input().split()))
for i in l:
    t+=i
if t>0:
    print(t)
else:
    print(0)