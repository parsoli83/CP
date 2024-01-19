n=int(input())
if n%2==1:
    print(0)
else:
    l=[2 for i in range(n//2)]
    l_cases = []
    l_cases .append(l)
    def ways(l):    
        for i in range(len(l)-1):
            ll=l.copy()
            ll[i] = l[i]+l[i+1]
            del ll[i+1]
            if ll not in l_cases:
                l_cases.append(ll)
                ways(ll)
    def score(l):
        cnt = 1
        for i in l:
            if i==2:
                cnt*=3
            else:
                cnt*=2
        return cnt

    ways(l)
    total = 0
    for i in l_cases:
        total+=score(i)
    print(total*2)





