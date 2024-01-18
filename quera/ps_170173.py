for _ in range(int(input())):
    l=input().split()
    key = True
    if "O" not in l[2]:
        if "-" not in l[2]:
            for part in l[2]:
                if part not in l[0] and part not in l[1]:
                    key = False
                    break
        
        else:
            for i in range(len(l[2])-1):
                part = l[2][i]
                if part not in l[0] and part not in l[1]:
                    key = False
                    break
    else:
        if "-" not in l[2]:
            if "+" not in l[0] and "+" not in l[1]:
                key=False
    if key:
        print("valid")
    else:
        print("invalid")







