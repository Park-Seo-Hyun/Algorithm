num1, num2, num3 = map(int, input().split())

if(num1 == num2):
    if(num2 == num3):
        print(10000 + num1 * 1000)
    else:
        print(1000 + num1 * 100)
elif(num2 == num3):
    print(1000 + num2 * 100)
elif(num1 == num3):
    print(1000 + num1 * 100)
else:
    max = max(max(num1, num2), num3)
    print(max * 100)