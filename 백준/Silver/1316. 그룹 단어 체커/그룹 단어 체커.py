num = int(input())
total = 0

while(num > 0):
    arr = list(input())
    length = len(arr)
    hap = 0
    for i in range(length):
        for j in range(i + 1, length):
            if(arr[i] == arr[j]):
                sub = j - i
                if(sub >= 2):
                    if(arr[i] != arr[j - 1]): hap += 1
    if(hap == 0): total += 1
    num -= 1

print(total)