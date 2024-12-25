n = int(input())

while(n > 0):
    arr = input()
    total, seq = 0, 1
    for i in range(len(arr)):
        if(arr[i] == 'O'):
            if(i > 0 and arr[i - 1] == 'O'): seq += 1
            else: seq = 1
            total += seq * 1
    print(total)
            
    n -= 1