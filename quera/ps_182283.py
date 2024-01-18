n,k,q=list(map(int,input().split()))
l=[[] for i in range(k)]
for i in range(n):
    l[i] = list(map(int,input().split()))[1:]

for i in range(q):
    data= list(map(int,input().split()))
    common = l[data[1]-1]
    for j in range(2,data[0]+1):
        
        meow = []
        for item in common:
            if item not in l[data[j]-1]:
                meow.append(item)
        for ne in meow:
            common.remove(ne)
        
    print(len(common))

