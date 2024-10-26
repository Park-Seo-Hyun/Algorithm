import math

def goldPart(t, arr):
    hap = 0
    for i in range(2, int(n / 2) + 1):
        j = n - i
        if(arr[i] and arr[j]): hap += 1
    return hap

limit = 1000000
prime = [True] * (limit + 1)
prime[0] = prime[1] = False
for i in range(2, int(math.sqrt(limit)) + 1):
    if (prime[i] == True):
        j = 2
        while i * j <= limit:
            prime[i * j] = False
            j += 1
  
t = int(input())
while(t > 0):
    n = int(input())
    print(goldPart(t, prime))
    t -= 1