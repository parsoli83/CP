
def print_board(board,n):
    for i in range(n):
        for j in range(n):
            print(board[i][j],end=" ")
        print()


l= list(map(int,input().split()))
n= l[0]
board=[[0 for i in range(n)] for j in range(n-1)]
board.append([i for i in range(1,n+1)])
cnt = n+1
key=0
leng = n-1
x,y = n-1 , n-1
while leng>0:
    if key==0:
        for j in range(leng):
            x-=1;
            board[x][y] = cnt
            cnt+=1;
    
    elif key==1:
        for j in range(leng):
            y-=1;
            board[x][y] = cnt
            cnt+=1;
    elif key==2:
        for j in range(leng):
            x+=1;
            board[x][y] = cnt
            cnt+=1;
    elif key==3:
        for j in range(leng):
            y+=1;
            board[x][y] = cnt
            cnt+=1;
    key = (key+1)%4
    if key==2 or key==0:
        leng-=1
key = True
for i in range(n):
    for j in range(n):
        if board[i][j] == l[1]:
            kian=[i,j]
            key=False
            break
    if not key:
        break
key = True
for i in range(n):
    for j in range(n):
        if board[i][j] == l[2]:
            lamp=[i,j]
            key=False
            break
    if not key:
        break

r=lamp[1] - kian[1]
if r>0:
    print(r,"R")
elif r!=0:
    print(-1*r,"L")


r=lamp[0] - kian[0]
if r>0:
    print(r,"D")
elif r!=0:
    print(-1*r,"U")









    


