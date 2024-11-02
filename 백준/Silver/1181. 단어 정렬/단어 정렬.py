n = int(input())
arr = []
while(n > 0):
    num = input()
    arr.append(num)
    n -= 1
arr = list(set(arr))
arr.sort(key = lambda x: (len(x), x))
for i in range(len(arr)):
    print('{}'.format(arr[i]))