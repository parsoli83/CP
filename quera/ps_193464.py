n,tmp = list(map(int,input().split()))
n*=tmp
minim = 1000000
winner = -1
for t in range(int(input())):
    tmp = list(map(int,input().split()))
    if tmp[0] + n/tmp[1] < minim:
        minim = tmp[0] + n/tmp[1]
        winner = t+1
print(winner)