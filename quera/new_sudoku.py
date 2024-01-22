blank = 0
def get_input():
    """
    should return a 9*9 list:
    """
    l=[]
    for i in range(9):
        l.append(list(map(int,input().split())))
    return l

def print_board(l):
    for i in range(9):
        for j in range(9):
            print(l[i][j],end = " ")
        print()



def free_place(l):
    f = []
    for i in range(9):
        for j in range(9):
            if l[i][j] == blank:
                return [i,j]


def possibles(l,place):
    possible=[i for i in range(1,10)]
    for i in range(9):
        if l[place[0]][i] in possible:
            possible.remove(l[place[0]][i])
    for i in range(9):
        if l[i][place[1]] in possible:
            possible.remove(l[i][place[1]])
    x= place[0]//3
    y= place[1]//3
    for i in range(x*3,x*3+3):
        for j in range(y*3,y*3+3):
            if [i,j]!=place:
                if l[i][j] in possible:
                    possible.remove(l[i][j])
    return possible



def solver(l):
    free = free_place(l)
    if not free:
        return l
    poss = possibles(l,free)
    if len(poss)==0:
        return None
    for val in poss:
        l[free[0]][free[1]] = val
        meow = solver(l)
        if meow:
            return meow     
        l[free[0]][free[1]] = 0
                   
print_board(solver(get_input()))