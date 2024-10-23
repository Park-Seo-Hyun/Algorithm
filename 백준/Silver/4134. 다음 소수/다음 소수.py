import math

def getPrime(n):
    while(1):
        if n < 2 :
            return 2
        is_prime = True
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0: 
                is_prime = False
                break
        if is_prime:
            return n
        n += 1
        
num = int(input())
while(num > 0):
    number = int(input())
    print(getPrime(number))
    num -= 1