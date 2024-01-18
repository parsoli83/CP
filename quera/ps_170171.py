n=int(input())
l=list(map(int,input().split()))
m = sum(l) - 100*(n-1)
if m<0:
    print(0,min(l))
else:
    print(m,min(l))