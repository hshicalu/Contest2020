

h,w = map(int,input().split())

a = []

for i in range(h):
    a.append(list(map(int,input().split())))

min_cand = []
for i in range(h):
    min_cand.append(min(a[i]))

min_num = min(min_cand)

ans = 0
for i in range(h):
    for j in range(w):
        ans += a[i][j] - min_num
print(ans)
