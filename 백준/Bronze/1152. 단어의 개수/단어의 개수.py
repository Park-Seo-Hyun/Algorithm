arr = input()
cnt = 0
if(arr[0] == ' ' and len(arr) == 1):
    print(cnt)
    exit()
for i in range(1, len(arr) - 1):
    if(arr[i] == ' '):
        cnt += 1
print(cnt + 1)