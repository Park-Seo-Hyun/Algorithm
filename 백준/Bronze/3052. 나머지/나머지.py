arr = []
total = 0
for i in range(10):
    n = int(input())
    arr.append(n%42)
for i in range(10):
    hap = 0
    for j in range(i + 1, 10):
        if(arr[i] == arr[j]): hap += 1
    if(hap == 0):
        total += 1
print(total)