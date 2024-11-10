arr = []

def is_empty():
    return len(arr) == 0

def push(n):
    arr.append(n)

def pop():
    if(is_empty()): return
    else: arr.pop(-1)


k = int(input())
while(k > 0):
    n = int(input())
    if(n == 0): pop()
    else: push(n)
    k -= 1
    
hap = 0
for i in arr:
    hap += i
print(hap)