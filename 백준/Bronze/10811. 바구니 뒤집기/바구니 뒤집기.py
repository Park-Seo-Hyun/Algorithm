n, m = map(int, input().split())
arr = []

for i in range(n):
    arr.append(i + 1)

while(m > 0):
    I, J = map(int, input().split())
    while(I < J):
        temp = arr[I - 1]
        arr[I - 1] = arr[J- 1]
        arr[J - 1] = temp
        I += 1
        J -= 1
    m -=1
for i in range(n):
    print(arr[i], end=" ")