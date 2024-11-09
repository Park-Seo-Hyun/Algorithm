n, b = input().split()
b = int(b)
length = len(n)
hap = 0
for i in n:
    if ('0'<= i and i <= '9'):
        num = int(i)
    else:
        num = int(ord(i) - 55)
    hap += pow(b, length - 1) * num
    length -= 1
print(hap)