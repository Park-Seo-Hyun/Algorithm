import math

n = int(input())
arr = []
distance = []

for i in range(n):
    num = int(input())
    arr.append(num)
for i in range(n - 1):
    num = arr[i + 1] - arr[i]
    distance.append(num)

min = distance[0]
for i in range(1, n - 1):
    min = math.gcd(min, distance[i])

total = 0
for i in range(n - 1):
    total += distance[i] // min - 1
print(total)