arr = input()
length = 1
for i in arr:
    if(length == 11):
        length = 1
        print()
    print(i, end="")
    length += 1