

N = int(input())
s = input()
t = []
cnt = 0
for each in s:
    t.append(each)
    if len(t) >= 3:
        if (t[len(t) - 3] + t[len(t) - 2] + t[len(t) - 1]) == "fox":
            t.pop()
            t.pop()
            t.pop()
            cnt += 1

print(N - 3 * cnt)

