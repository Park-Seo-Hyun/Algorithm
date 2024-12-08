arr = input()
alpha = [0] * 26

for char in arr:
    if(char >= 'a' and char <= 'z'):
        alpha[ord(char) - ord('a')] += 1
    if(char >= 'A' and char <= 'Z'):
        alpha[ord(char) - ord('A')] += 1
            
max = alpha[0]
cnt = 0
number = 0
for i in range(26):
    if (max < alpha[i]):
        max = alpha[i]
        number = i
for i in alpha:
    if (max == i):
        cnt += 1
if(cnt > 1):
    print("?")
else:
    print(chr(number + 65))