total = 0
hap = 0
avg = 0


for i in range(20):
    name, score, rate = input().split()
    name = list(name)[:50]
    score = float(score)
    rate = list(rate)

    if(rate[0] == 'P'): continue
    total += score
    if(rate[0] == 'A'): hap = 4
    elif(rate[0] == 'B'): hap = 3
    elif(rate[0] == 'C'): hap = 2
    elif(rate[0] == 'D'): hap = 1
    elif(rate[0] == 'F'): continue
    if(rate[1] == '+'): hap += 0.5

    avg += score * hap
print("%f" %(avg/total))