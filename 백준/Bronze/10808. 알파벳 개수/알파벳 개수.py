alpha = [0] * 26
arr = input()
for i in arr:
    num = ord(i) - 97
    alpha[num] += 1
for i in alpha:
    print(i, end=" ")