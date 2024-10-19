n = int(input())
total = 0
arr = list(map(int, input().split()[:n]))

for i in arr:
    num = i
    hap = 0
    for j in range(1, num + 1):
        if(num % j == 0):
            hap += 1
    if(hap == 2):
        total += 1
print(total)