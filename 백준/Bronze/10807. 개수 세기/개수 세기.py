num = int(input())
arr = []
arr = map(int, input().split())
hap = 0
a = int(input())
for i in arr:
    if (a == i):
        hap += 1
print(hap)
