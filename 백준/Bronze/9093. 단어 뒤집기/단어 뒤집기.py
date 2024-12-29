n = int(input())

for i in range(n):
    arr = input()
    pos = 0
    stack = []
    while(1):
        if(pos == len(arr) or arr[pos] == ' '):
            for j in range(len(stack) - 1, -1, -1):
                print(stack[j], end="")
            stack = []
            pos += 1
            print(" ", end="")
        if(pos - 1 == len(arr)): break
        stack.append(arr[pos])
        pos += 1
    print()