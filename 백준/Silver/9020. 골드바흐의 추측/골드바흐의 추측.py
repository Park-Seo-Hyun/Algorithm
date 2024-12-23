import math

def isPrime(n):
    if(n < 2):
        return False
    for i in range(2, int(math.sqrt(n) + 1)):
        if(n % i == 0):
            return False
    return True

n = int(input())
while(n > 0):
    m = int(input())
    a, b = m // 2, m // 2
    while(a > 0):
        if(isPrime(a) and isPrime(b)):
            print(a, b)
            break
        else:
            a -= 1
            b += 1
    n -= 1