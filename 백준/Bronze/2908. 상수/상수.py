def change(num):
    length = len(num)
    for i in range(0, length // 2):
        temp = num[i]
        num[i] = num[length - i - 1]
        num[length - i - 1] = temp

    return int(''.join(num))

num1, num2 = map(list, input().split())
n1 = change(num1)
n2 = change(num2)
if (n1 > n2):
    print(n1)
else:
    print(n2)