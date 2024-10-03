arr = []
max = -1
num = -1
for i in range(0, 9):
    value = int(input())
    if (value < 1 or value > 99):
        value = int(input())
    arr.append(value)
    if (max < value):
        max = value
        num = i + 1
    
print(max)
print(num)