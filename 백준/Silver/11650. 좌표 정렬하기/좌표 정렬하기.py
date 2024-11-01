n = int(input())
arr = []
while(n > 0):
    num = list(map(int, input().split()))
    arr.append(num)
    n -= 1
arr.sort()
for i in range(len(arr)):
    print('{} {}'.format(arr[i][0], arr[i][1]))