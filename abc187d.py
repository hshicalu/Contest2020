

n = int(input())
ak = 0
ab_lists = []

for i in range(n):
    a,b = map(int,input().split())
    ak += a
    ab_lists.append(b + 2 * a)
ab_lists.sort()

ans = 0
x = -ak

for i in range(n):
    x += ab_lists.pop()
    ans += 1
    if x > 0:
        print(ans)
        break

