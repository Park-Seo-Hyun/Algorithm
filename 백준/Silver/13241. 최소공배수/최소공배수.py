import math

def LCM(a, b):
    return a * b / math.gcd(a, b)
    
a, b = map(int, input().split())
print('{}'.format(int(LCM(a, b))))