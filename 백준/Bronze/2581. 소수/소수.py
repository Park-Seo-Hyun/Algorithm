m = int(input())
n = int(input())
total = 0
min = 10001

for i in range(m, n+1):
    hap = 0
    for j in range(1, i + 1):
        if(i % j == 0): hap+= 1
    if(hap == 2): 
        total += i
        if(i < min):
            min = i
if(total == 0):
    print('{}'.format(-1))
else: 
    print('{}\n{}'.format(total, min))  