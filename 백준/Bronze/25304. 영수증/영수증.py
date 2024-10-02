num = int(input())
amount = int(input())
total = 0
for i in range(amount):
    A, B = map(int, input().split())
    total += A * B
if (num == total): print('Yes')
else: print('No')