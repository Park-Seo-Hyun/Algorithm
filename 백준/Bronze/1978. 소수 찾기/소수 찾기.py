n = int(input())
arr = list(map(int, input().split()[:n]))
total = 0
for i in arr:
    hap = 0
    if (i > 1):   
        for j in range(2, i):
            if(i % j == 0):
                hap += 1
        if(not hap):
            total += 1
print(total)