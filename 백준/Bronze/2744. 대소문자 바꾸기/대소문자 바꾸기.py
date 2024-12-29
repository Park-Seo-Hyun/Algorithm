arr = input()
for i in arr:
    if(ord(i) >= 65 and ord(i) <= 90):
        alpha = chr(ord(i) + 32)
        print(alpha, end="")
    elif(ord(i) >= 97 and ord(i) <= 122):
        alpha = chr(ord(i) - 32)
        print(alpha, end="")