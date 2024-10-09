n = int(input())

while(n > 0):
    m, arr = input().split()
    m = int(m)
    arr = list(arr)
    for i in range(0, len(arr)):
        for j in range(m):
            print(f'{arr[i]}', end="")
    n -= 1
    print()