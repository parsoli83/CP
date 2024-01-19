text = input()
text = [i for i in text]
qs = list(filter(lambda x:text[x]=="?",[i for i in range(len(text))]))
print(qs)
def text_printer(text):
    if "?" not in text:
        for i in text:
            print(i,end="")
        print ()
        return 0
    ind = text.index("?")
    text[ind]="1"
    text_printer(text)
    text[ind]="0"
    text_printer(text)
text_printer(text)