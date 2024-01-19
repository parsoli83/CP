n=int(input())
l= [int(i) for i in input().split()]


def func(l,cnt=0):
    if len(l)==0:
        return 1
    for i in range(len(l)-1):
        if l[i]>l[i+1]:
            if i == len(l)-2:
                cnt += func(l[:i])
            elif i==0:
                cnt+= func(l[2:])
            else:
                cnt+=func(l[:i]+l[i+2:])

    return cnt
print(func(l))
    
