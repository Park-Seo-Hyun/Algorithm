arr = input()

for i in range(97, 123):
    j = 0
    found = False
    while(j < len(arr)):
        if (chr(i) == arr[j]):
            found = True
            break
        j += 1
    if(found):
        print(j, end=" ")
    else:
        print(-1, end=" ")