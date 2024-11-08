while(1):
    a, b, c = map(int, input().split())
    if (a == 0 and b == 0 and c == 0): break
    max = a
    hap = a + b + c
    if (b > max): max = b
    if (c > max): max = c
    if(hap - max > max):
        if(a == b and b == c):
            print("Equilateral")
        elif(a == b or b == c or a == c):
            print("Isosceles ")
        else: print("Scalene")
    else:
        print("Invalid")