arr = []
for i in range(10):
    num = int(input())
    arr.append(num % 42)
count = 0
for i in range(10):
    hap = 0
    for j in range(i):
        if(arr[i] == arr[j]):
            hap += 1
    if(hap == 0):
        count += 1
print(count)