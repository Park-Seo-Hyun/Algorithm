n, m = map(int, input().split())
score = list(map(int, input().split()[:n]))
score.sort(reverse=True)
print(score[m - 1])