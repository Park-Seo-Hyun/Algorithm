while(1):
    n = int(input())
    if(n == -1): exit()
    hap = 0
    arr = []
    for i in range(1, n):
        if(n % i == 0): 
            arr.append(i)
            hap += i
        
    if(hap == n):
        print("{}".format(n), end=" = ")
        for i in range(len(arr) - 1):
            print("{}".format(arr[i]), end=" + ")
        print(arr[len(arr) -1])
    else:
        print("{} is NOT perfect.".format(n))