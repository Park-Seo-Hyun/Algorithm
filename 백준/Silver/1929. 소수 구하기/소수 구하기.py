import math

def getPrime(n, m):
    if(n < 2): n = 2
    for i in range(n, m + 1):
        prime = True
        for j in range(2, int(math.sqrt(i)) + 1):
            if(i % j == 0):
                prime = False
                break
        if(prime == True):
            print(i)
            
n, m = map(int, input().split())
getPrime(n, m)