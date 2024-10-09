n = input()
len = len(n)
if(n[0] == ' '):
    if(len == 1):
        print(0)
        exit()
num = 0
for i in range(1, len - 1):
    if(n[i] == ' '):
        num += 1
print(num + 1)