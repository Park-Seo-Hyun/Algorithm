import math

arr = []
for i in range(2):
    a, b = map(int, input().split())
    arr.append(a)
    arr.append(b)
num1 = arr[0] * arr[3] + arr[2] * arr[1]
num2 = arr[1] * arr[3]
g = math.gcd(num1, num2)
num1 //= g
num2 //= g
print('{} {}'.format(num1, num2))