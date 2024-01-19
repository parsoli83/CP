# 1 1 2 2 2 8
l=list(map(int,input().split()))
for i in range(2):
    print(1-l[i],end=" ")
for i in range(2,2+3):
    print(2-l[i],end=" ")
print(8-l[-1])