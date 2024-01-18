meow= 0
nig = int(input())
def main(s,o,c):
    global meow
    if o+c==nig*2:
        meow+=1
        print(s)
        return 0
    if o<nig:
        main(s+"(",o+1,c)
    if o>c and c<nig:
        main(s+")",o,c+1)
    

main("",0,0)
print(meow)