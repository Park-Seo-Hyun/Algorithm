n, m = input().split()
n1 = 100 * int(n[2]) + 10 * int(n[1]) + int(n[0])
m1 = 100 * int(m[2]) + 10 * int(m[1]) + int(m[0])
print(max(n1, m1))