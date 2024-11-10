n  = int(input())
stack = []
left = 0
right = 0
while(n > 0):
    ch = list(input())
    for i in ch:
        if (i == '('): left += 1
        elif (i == ')'): right += 1
        
        if(right > left): break
    if(left != right): print("NO")
    else: print("YES")
    left = 0
    right = 0    
    n -= 1