def hanoi_tower(n, start, middle, end):
    if(n == 1):
        print(start, end)
    else:
        hanoi_tower(n-1, start, end, middle)
        print(start, end)
        hanoi_tower(n - 1, middle, start, end)
    

n = int(input())
cnt = int(2 ** n - 1)
print(cnt)
hanoi_tower(n, 1, 2, 3)