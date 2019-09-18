word = input()
duplicate = []
minchar = word[0]
for x in word :
    if ord(minchar) < ord(x) :
        print("Ann")
    else :
        print("Mike")
        minchar = x