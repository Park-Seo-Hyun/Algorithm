def gcd(a, b):
    while(b > 0):
        a, b = b, a % b
    return a

n = int(input())

while(n > 0):
    num = list(map(int, input().split()))
    m = num[0]
    arr = num[1: m + 1]
    sum = 0
    for i in range(m - 1):
        for j in range(i + 1, m):
            sum += gcd(arr[i], arr[j])
    print(sum)
    
    n -= 1