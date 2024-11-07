n = int(input())
ground_x = []
ground_y = []
while (n > 0):
    x, y = map(int, input().split())
    ground_x.append(x)
    ground_y.append(y)
    n -= 1
ground_x.sort()
ground_y.sort()
total_x = ground_x[n - 1] - ground_x[0]
total_y = ground_y[n - 1] - ground_y[0]
print(total_x * total_y)