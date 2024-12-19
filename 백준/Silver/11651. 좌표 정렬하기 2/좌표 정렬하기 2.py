arr = []
n = int(input())
for i in range(n):
    num = list(map(int, input().split()[:2]))
    arr.append(num)
arr.sort(key = lambda x : (x[1], x[0]))
for i in range(n):
    print('{} {}'.format(arr[i][0], arr[i][1]))