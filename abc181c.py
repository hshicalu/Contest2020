
import math

N = int(input()) 
lists = []
dist_lists = []
for i in range(N):
    x, y = map(int,input().split())     
    lists.append([x,y])

for i in range(N):
    for j in range(N):
        if i != j:
            dist = round(math.sqrt((lists[i][0] - lists[j][0]) ** 2 + (lists[i][1] - lists[j][1]) ** 2), 4)
            dist_lists.append(dist)

m = len(dist_lists)

ans = "No"
for i in range(m):
    for j in range(m):
        for k in range(m):
            if i!= j and j != k and k != i:
                if dist_lists[i] == dist_lists[j] + dist_lists[k]:
                    ans = "Yes"
                    break
print(ans)



