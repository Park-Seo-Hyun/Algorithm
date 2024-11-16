import sys

cnt = 0
result = -1

def merge(arr, left, mid, right):
    global cnt, result
    sorted = []
    i = left
    j = mid + 1
    while(i <= mid and j <= right):
        if(arr[i] <= arr[j]):
            sorted.append(arr[i])
            i += 1
        else:
            sorted.append(arr[j])
            j += 1
    while(i <= mid):
        sorted.append(arr[i])
        i += 1
    while(j <= right):
        sorted.append(arr[j])
        j += 1
    l = left
    t = 0
    while(l <= right):
        arr[l] = sorted[t]
        cnt += 1
        if(cnt == k):
            result = arr[l]
            break
        l += 1
        t += 1
            

def merge_sort(arr, left, right):
    if(left < right):
        mid = (left + right) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)
        
            

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()[:n]))
merge_sort(arr, 0, n - 1)
print(result)