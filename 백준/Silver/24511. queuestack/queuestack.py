n = int(input())
queue = list(map(int, input().split()[:n]))
queue_stack = list(map(int, input().split()[:n]))
m = int(input())
arr = list(map(int, input().split()[:m]))
for i in range(n - 1, -1, -1):
    if(m == 0): break
    if(queue[i] == 0):
        print(queue_stack[i], end=" ")
        m -= 1
for i in range(m):
    print(arr[i], end=" ")