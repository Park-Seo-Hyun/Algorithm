arr = list(input())[:15]
length = len(arr)
time = 0
for i in range(length):
    alpha = arr[i]
    if (alpha >= 'A' and alpha <= 'C'): time += 3
    elif (alpha >= 'D' and alpha <= 'F'): time += 4
    elif (alpha >= 'G' and alpha <= 'I'): time += 5
    elif (alpha >= 'J' and alpha <= 'L'): time += 6
    elif (alpha >= 'M' and alpha <= 'O'): time += 7
    elif (alpha >= 'P' and alpha <= 'S'): time += 8
    elif (alpha >= 'T' and alpha <= 'V'): time += 9
    elif (alpha >= 'W' and alpha <= 'Z'): time += 10

print(time)