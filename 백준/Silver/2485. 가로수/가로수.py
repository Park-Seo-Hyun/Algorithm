import math

n = int(input())
arr = []
distance = []
while(n > 0):
    num = int(input())
    arr.append(num)
    n-= 1
for i in range(len(arr) - 1):
    distance.append(arr[i + 1] - arr[i])
GCD = distance[0]
for i in range(1, len(distance)):
    GCD = math.gcd(GCD, distance[i])
total = 0
for i in range(len(distance)):
    total += int((distance[i] / GCD - 1))
print('{}'.format(total))