from random import randint


score = 0
right = 0
wrong = 0

while True:
    num1 = randint(1,9)
    num2 = randint(1,9)
    for i in range(2):
        num1=num1*10+randint(0,9)
        num2=num2*10+randint(0,9)
    m = num1 *num2
    taha = int(input(f"{num1} * {num2} = "))
    if taha == m:
        print("TRUE!")
        right+=1
    else:
        print("WRONG!")
        wrong+=1
    score = right-wrong
    print("score:",score)
    print("#"*50)
    