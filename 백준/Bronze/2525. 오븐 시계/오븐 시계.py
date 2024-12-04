h, m = map(int, input().split())
tmp = int(input())

m += tmp

if(m >= 60):
    h = (h + m // 60) % 24
    m %= 60
print('{} {}'.format(h, m))