def is_empty(n):
    return len(n) == 0

n, k = map(int, input().split())
arr = []
for i in range(n):
    arr.append(i + 1)

print("<", end="")
while(not is_empty(arr)):
    for i in range(k - 1):
        arr.append(arr.pop(0))
    if(len(arr) != 1):
        print('{}, '.format(arr.pop(0)), end="")
    else:
        print('{}>'.format(arr.pop(0)))