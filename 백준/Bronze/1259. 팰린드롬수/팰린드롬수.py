while(1):
    arr = input()[:5]
    prime = True
    if(arr == "0"): break
    for i in range(len(arr) // 2):
        if(arr[i] != arr[len(arr) - 1 - i]):
            prime = False
            break
    if(prime): print("yes")
    else: print("no")