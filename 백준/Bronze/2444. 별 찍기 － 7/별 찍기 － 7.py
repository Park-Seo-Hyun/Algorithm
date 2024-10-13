num = int(input())

for i in range(num):
    print(" " * (num - i - 1), end="")
    print("*" * (2 * i + 1))
for i in range(1, num):
    print(" " * i, end="")
    print("*" * (2 * num - 2 * i - 1))