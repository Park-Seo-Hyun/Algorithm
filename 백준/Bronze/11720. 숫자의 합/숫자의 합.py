n = int(input())
numbers = list(input())

total = 0
for i in range(n):
    total += int(numbers[i])

print(total)