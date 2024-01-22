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
def free_places(l):
    f = []
    for i in range(9):
        for j in range(9):
            if l[i][j] == blank:
                f.append([i,j])
    return f
def possibles(l,place):
    possible=[i for i in range(1,10)]
    for i in range(9):
        if l[place[0]][i] in possible:
            possible.remove(l[place[0]][i])
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

def good_board(l):
    for place in free_places(l):
        if len(possibles(l,place))==0:
            return False
    return True

def board_change(l,point,val):
    l[point[0]][point[1]] = val
    return l


def solver(l):
    print(l)
    places = free_places(l)
    if len(places)==0:
        return l
    done = []
    for point in places:
        poss = possibles(l,point)
        if len(poss)==0:
            break
        for i in poss:
            if good_board(l):
                done = solver(board_change(l,point,i))
                if done:
                    return done
        l[point[0]][point[1]] = 0


print_board(solver(get_input()))

























"""

blank = 0
def get_input():
    l=[]
    for i in range(9):
        l.append(list(map(int,input().split())))
    return l

def print_board(l):
    for i in range(9):
        for j in range(9):
            print(l[i][j],end = " ")
        print()
def free_places(l):
    f = []
    for i in range(9):
        for j in range(9):
            if l[i][j] == blank:
                f.append([i,j])
    return f
def possibles(l,place):
    possible=[i for i in range(1,10)]
    for i in range(9):
        if l[place[0]][i] in possible:
            possible.remove(l[place[0]][i])
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
    print(l)
    places = free_places(l)
    if len(places)==0:
        return l
    done = []
    for point in places:
        poss = possibles(l,point)
        if len(poss)==0:
            break
        for i in poss:
            l[point[0]][point[1]] = i
            done = solver(l)
            if done:
                return done
        l[point[0]][point[1]] = 0


print_board(solver(get_input()))
        
"""        



