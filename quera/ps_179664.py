n=int(input())
s1=list(input())
s2=list(input())

cnt = 0
for i in range(n):
    if s1[i]!=s2[i]:
        cnt+=1
if cnt % 2== 0:
    print(cnt//2)
else:
    print("NO")
