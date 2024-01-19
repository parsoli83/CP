n=int(input())
l=list(map(int,input().split()))
ll=list(n)
for i in range(n-1,-1,-1):
    ll[i] =f"{l[i]:.7f}"
    if i==0:
        break
    meow = l[i]/(i)
    for j in range(n):
        l[j]+=meow
    l[i]=0
for i in ll:
    print(ll,end=" ")
print()

