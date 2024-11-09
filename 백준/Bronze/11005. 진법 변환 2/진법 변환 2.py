n, b = map(int, input().split())
arr = []
while(n > 0):
    num = n % b
    if(num >= 0 and num <= 9):
        arr.append(num)
    else:
        arr.append(chr(num + 55))
    n //= b
for i in range(len(arr) - 1,-1,-1):
    print(arr[i], end="")