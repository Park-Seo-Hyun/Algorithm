n, x = map(int, input().split())
arr = list(map(int, input().split()[:n]))

for i in arr:
    if (i < x):
        print(i, end=" ")