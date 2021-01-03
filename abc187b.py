
n = int(input())
pos = []
for i in range(n):
    x,y = map(int,input().split())
    pos.append([x, y])

ans = 0

for i in range(n):
    for j in range(n):
        if i < j:
            slp = (pos[i][1] - pos[j][1]) / (pos[i][0] - pos[j][0])
            if -1 <= slp and slp <= 1:
                ans += 1

print(ans)

