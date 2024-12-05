arr = []
for i in range(9):
    num = int(input())
    arr.append(num)
max = arr[0]
place = 1
for i in range(1, 9):
    if(arr[i] > max):
        max = arr[i]
        place = i + 1
print('{}\n{}'.format(max, place))