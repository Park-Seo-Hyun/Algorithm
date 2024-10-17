arr = [[0] * 100 for i in range(100)]

n =  int(input())
while(n > 0):
    x, y = map(int, input().split())
    for i in range(x-1, x + 9):
        for j in range(y - 1, y + 9):
            arr[i][j] = 1
    n -= 1

cnt = 0
for i in range(100):
    for j in range(100):
        if(arr[i][j] == 1):
            cnt +=1

print(cnt)