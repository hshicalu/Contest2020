
N = int(input())

for k in range(N):
    if 3 ** k >= N:
        break
for l in range(N):
    if 5 ** l >= N:
        break



for i in range(1 ,k + 1):
    for j in range(1 ,l + 1):
        if 3 ** i + 5 ** j == N:
            print(i,j)
            exit()
else:
    print(-1)
