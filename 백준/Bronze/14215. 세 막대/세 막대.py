x = list(map(int, input().split()))
x.sort()
if(x[0] + x[1] > x[2]):
    print(x[0] + x[1] + x[2])
else:
    print(2 * (x[0] + x[1]) - 1)
