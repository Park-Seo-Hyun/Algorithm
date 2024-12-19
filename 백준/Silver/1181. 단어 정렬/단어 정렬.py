word = []
n = int(input())
for i in range(n):
    arr = input()[:51]
    word.append(arr)
word.sort(key = lambda x : (len(x), x))
print(word[0])
for i in range(1, n):
    if (word[i - 1] != word[i]):
        print(word[i])