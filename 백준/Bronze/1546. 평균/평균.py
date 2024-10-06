n = int(input())
arr = list(map(int, input().split()))[:n]
m = max(arr)

total = 0
for i in range(n):
    arr[i] = float(arr[i]) / m * 100
    total += arr[i]

print(total / n)