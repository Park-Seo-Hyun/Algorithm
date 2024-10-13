arr = list(input())
length = len(arr)

for i in range(0, length//2):
    if(arr[i] != arr[length - 1 - i]):
        print(0)
        exit()
print(1)