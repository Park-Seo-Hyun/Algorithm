num = []
hap = 0
for i in range(5):
    n = int(input())
    num.append(n)
    hap += n
num.sort()
print('{}\n{}'.format(int(hap/5), num[2]))