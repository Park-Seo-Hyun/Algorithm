n = int(input())
while(n > 0):
    a, b = map(int, input().split())
    MIN = min(a, b)
    mul = 1
    for i in range(2, MIN + 1):
        while(a % i == 0 and b % i == 0):
            a //= i
            b //= i
            mul *= i
    mul = mul * a * b
    print('{}'.format(mul))
    n -= 1