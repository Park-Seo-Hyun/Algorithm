arr = []
locate = []

for i in range(9):
    arr.append(list(map(int, input().split()[:9])))

max = float('-inf')
for i in range(9):
    for j in range(9):
        if(max < arr[i][j]):
            max = arr[i][j]
            locate = [[i, j]]
        elif(max == arr[i][j]):
            locate.append([i, j])
print(max)
print('{} {}'.format(locate[0][0] + 1, locate[0][1] + 1))