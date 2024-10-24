import math

limit = int(123456) * 2
prime = [True] * (limit + 1)
prime[1] = False
for i in range(2, int(math.sqrt(limit)) + 1):
    if (prime[i] == True):
        j = 2
        while i * j <= limit:
            prime[i * j] = False
            j += 1
            
            
while(1):
    n = int(input())
    if(n == 0): break
    hap = 0
    for i in range(n + 1, 2 * n + 1):
        if(prime[i]):
            hap += 1
    print(hap)