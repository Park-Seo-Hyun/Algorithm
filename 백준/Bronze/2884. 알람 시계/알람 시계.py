h, m = map(int, input().split())
m -= 45

if (m < 0):
    m += 60
    h = (h - 1) % 24
print('{} {}'.format(h, m))