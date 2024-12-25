def gcd(a, b):
    while(b > 0):
        a, b = b, a % b
    return a

n = int(input())

while(n > 0):
    a, b = map(int, input().split())
    print(a * b // gcd(a, b))
    n -= 1