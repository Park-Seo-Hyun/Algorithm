n, m = map(int, input().split())
arr = [0] * (n + 1)
for i in range(n + 1):
    arr[i] = i
while(m > 0):
    i, j = map(int, input().split())
    while(i < j):
        tmp = arr[i]
        arr[i] = arr[j]
        arr[j] = tmp
        i += 1
        j -= 1
    m -= 1
for i in range(1, n+1):
    print(arr[i], end=" ")