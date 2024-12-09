arr = [[0] * 100 for i in range(100)]

n = int(input())
while(n > 0):
    a, b = map(int, input().split())
    for i in range(a - 1, a + 9):
        for j in range(b - 1, b + 9):
            arr[i][j] = 1
    n -= 1
    
cnt = 0
for i in range(100):
    for j in range(100):
        if(arr[i][j] == 1):
            cnt += 1
print(cnt)