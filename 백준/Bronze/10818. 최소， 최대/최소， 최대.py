n = int(input())
arr = list(map(int, input().split()[:n]))

min = arr[0]
max = arr[0]
for i in arr:
    if(i > max):
        max = i
    if (i < min):
        min = i
print('{} {}'.format(min, max))