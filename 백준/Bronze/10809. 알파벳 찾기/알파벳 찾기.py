s = list(input())
s.append(0)

for i in range(97, 123):
    j = 0
    while(s[j] != 0):
        if(s[j] == chr(i)): break
        j += 1

    if(s[j] == chr(i)):
        print(f'{j}', end=" ")
    else:
        print(f'{-1}', end=" ")